/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#pragma once

namespace BinaryData
{
    extern const char*   browser_panel_png;
    const int            browser_panel_pngSize = 15040;

    extern const char*   fx_panel_png;
    const int            fx_panel_pngSize = 62240;

    extern const char*   Knob_32_png;
    const int            Knob_32_pngSize = 143093;

    extern const char*   Knob_48_png;
    const int            Knob_48_pngSize = 309651;

    extern const char*   Knob_64_png;
    const int            Knob_64_pngSize = 507673;

    extern const char*   Knob_128_png;
    const int            Knob_128_pngSize = 1847656;

    extern const char*   mod_panel_png;
    const int            mod_panel_pngSize = 15032;

    extern const char*   oscillator_noise_48_png;
    const int            oscillator_noise_48_pngSize = 17465;

    extern const char*   oscillator_saw_48_png;
    const int            oscillator_saw_48_pngSize = 15735;

    extern const char*   oscillator_sine_48_png;
    const int            oscillator_sine_48_pngSize = 18394;

    extern const char*   oscillator_square_48_png;
    const int            oscillator_square_48_pngSize = 17545;

    extern const char*   settings_panel_png;
    const int            settings_panel_pngSize = 15061;

    extern const char*   sizehelper_png;
    const int            sizehelper_pngSize = 19686;

    extern const char*   trio_png;
    const int            trio_pngSize = 17131;

    // Number of elements in the namedResourceList and originalFileNames arrays.
    const int namedResourceListSize = 14;

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
