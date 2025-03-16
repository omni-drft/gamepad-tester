workspace "MyWorkspace"
   configurations { "Debug", "Release" }
   architecture "x86_64"

project "MyProject"
   kind "ConsoleApp"
   language "C"

   -- Source files
   files {
      "src/**.c",
      "src/**.h"
   }

   -- Raylib headers
   includedirs {
      "dependencies/raylib/src"
   }

   -- Ensure the folder for Raylib’s build output exists
   os.mkdir("build/raylib")

   -- Pre-build: configure & build Raylib with CMake
   prebuildcommands {
      -- Configure Raylib (static)
      'cmake -S "dependencies/raylib" -B "build/raylib" '
        .. '-DBUILD_SHARED_LIBS=OFF '
        .. '-DCMAKE_BUILD_TYPE=%{cfg.buildcfg}',

      -- Build Raylib
      'cmake --build "build/raylib" --config %{cfg.buildcfg}'
   }

   -- Link the static Raylib library produced by CMake
   libdirs {
      "build/raylib/raylib/%{cfg.buildcfg}"
   }
   links { "raylib" }

   filter "system:windows"
      systemversion "latest"
      -- Common Windows libraries needed by Raylib
      links {
         "winmm",
         "opengl32",
         "gdi32"
      }

   filter "system:linux"
      -- Common Linux libraries needed by Raylib
      links {
         "dl",
         "pthread",
         "m",
         "rt",
         "X11"
      }

   filter "configurations:Debug"
      symbols "on"

   filter "configurations:Release"
      optimize "on"
