/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#pragma once

namespace BinaryData
{
    extern const char*   amiMouseCursor_png;
    const int            amiMouseCursor_pngSize = 266;

    extern const char*   amiTrashOff_png;
    const int            amiTrashOff_pngSize = 248;

    extern const char*   amiTrashOn_png;
    const int            amiTrashOn_pngSize = 242;

    extern const char*   astriid_amiga_png;
    const int            astriid_amiga_pngSize = 38845;

    extern const char*   amiBoxBacking_png;
    const int            amiBoxBacking_pngSize = 946;

    extern const char*   amidos_ttf;
    const int            amidos_ttfSize = 15824;

    extern const char*   AmiLogo_png;
    const int            AmiLogo_pngSize = 36300;

    extern const char*   LICENSE_txt;
    const int            LICENSE_txtSize = 35823;

    // Number of elements in the namedResourceList and originalFileNames arrays.
    const int namedResourceListSize = 8;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Points to the start of a list of resource filenames.
    extern const char* originalFilenames[];

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes);

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding original, non-mangled filename (or a null pointer if the name isn't found).
    const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8);
}
