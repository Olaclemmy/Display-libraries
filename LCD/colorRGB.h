/*
 *
 *  This representation is based on UNIX X11 named color values
 *
 */

#ifndef __COLOR_RGB_H__
#define __COLOR_RGB_H__

typedef union {
    uint32_t value;
    struct {
        uint8_t B;
        uint8_t G;
        uint8_t R;
        uint8_t A;
    };
} RGBColor_t;

#define AliceBlue			(RGBColor_t)0xFFF0F8FF
#define AntiqueWhite		(RGBColor_t)0xFFFAEBD7
#define Aqua				(RGBColor_t)0xFF00FFFF
#define Aquamarine			(RGBColor_t)0xFF7FFFD4
#define Azure				(RGBColor_t)0xFFF0FFFF
#define Beige				(RGBColor_t)0xFFF5F5DC
#define Bisque				(RGBColor_t)0xFFFFE4C4
#define Black				(RGBColor_t)0xFF000000
#define BlanchedAlmond		(RGBColor_t)0xFFFFEBCD
#define Blue				(RGBColor_t)0xFF0000FF
#define BlueViolet			(RGBColor_t)0xFF8A2BE2
#define Brown				(RGBColor_t)0xFFA52A2A
#define BurlyWood			(RGBColor_t)0xFFDEB887
#define CadetBlue			(RGBColor_t)0xFF5F9EA0
#define Chartreuse			(RGBColor_t)0xFF7FFF00
#define Chocolate			(RGBColor_t)0xFFD2691E
#define Coral				(RGBColor_t)0xFFFF7F50
#define CornflowerBlue		(RGBColor_t)0xFF6495ED
#define Cornsilk			(RGBColor_t)0xFFFFF8DC
#define Crimson				(RGBColor_t)0xFFDC143C
#define Cyan				(RGBColor_t)0xFF00FFFF
#define DarkBlue			(RGBColor_t)0xFF00008B
#define DarkCyan			(RGBColor_t)0xFF008B8B
#define DarkGoldenrod		(RGBColor_t)0xFFB8860B
#define DarkGray			(RGBColor_t)0xFFA9A9A9
#define DarkGreen			(RGBColor_t)0xFF006400
#define DarkKhaki			(RGBColor_t)0xFFBDB76B
#define DarkMagenta			(RGBColor_t)0xFF8B008B
#define DarkOliveGreen		(RGBColor_t)0xFF556B2F
#define DarkOrange			(RGBColor_t)0xFFFF8C00
#define DarkOrchid			(RGBColor_t)0xFF9932CC
#define DarkRed				(RGBColor_t)0xFF8B0000
#define DarkSalmon			(RGBColor_t)0xFFE9967A
#define DarkSeaGreen		(RGBColor_t)0xFF8FBC8F
#define DarkSlateBlue		(RGBColor_t)0xFF483D8B
#define DarkSlateGray		(RGBColor_t)0xFF2F4F4F
#define DarkTurquoise		(RGBColor_t)0xFF00CED1
#define DarkViolet			(RGBColor_t)0xFF9400D3
#define DeepPink			(RGBColor_t)0xFFFF1493
#define DeepSkyBlue			(RGBColor_t)0xFF00BFFF
#define DimGray				(RGBColor_t)0xFF696969
#define DodgerBlue			(RGBColor_t)0xFF1E90FF
#define Firebrick			(RGBColor_t)0xFFB22222
#define FloralWhite			(RGBColor_t)0xFFFFFAF0
#define ForestGreen			(RGBColor_t)0xFF228B22
#define Fuchsia				(RGBColor_t)0xFFFF00FF
#define Gainsboro			(RGBColor_t)0xFFDCDCDC
#define GhostWhite			(RGBColor_t)0xFFF8F8FF
#define Gold				(RGBColor_t)0xFFFFD700
#define Goldenrod			(RGBColor_t)0xFFDAA520
#define Gray				(RGBColor_t)0xFF808080
#define Green				(RGBColor_t)0xFF008000
#define GreenYellow			(RGBColor_t)0xFFADFF2F
#define Honeydew			(RGBColor_t)0xFFF0FFF0
#define HotPink				(RGBColor_t)0xFFFF69B4
#define IndianRed			(RGBColor_t)0xFFCD5C5C
#define Indigo				(RGBColor_t)0xFF4B0082
#define Ivory				(RGBColor_t)0xFFFFFFF0
#define Khaki				(RGBColor_t)0xFFF0E68C
#define Lavender			(RGBColor_t)0xFFE6E6FA
#define LavenderBlush		(RGBColor_t)0xFFFFF0F5
#define LawnGreen			(RGBColor_t)0xFF7CFC00
#define LemonChiffon		(RGBColor_t)0xFFFFFACD
#define LightBlue			(RGBColor_t)0xFFADD8E6
#define LightCoral			(RGBColor_t)0xFFF08080
#define LightCyan			(RGBColor_t)0xFFE0FFFF
#define LightGoldenrodYellow	(RGBColor_t)0xFFFAFAD2
#define LightGray			(RGBColor_t)0xFFD3D3D3
#define LightGreen			(RGBColor_t)0xFF90EE90
#define LightPink			(RGBColor_t)0xFFFFB6C1
#define LightSalmon			(RGBColor_t)0xFFFFA07A
#define LightSeaGreen		(RGBColor_t)0xFF20B2AA
#define LightSkyBlue		(RGBColor_t)0xFF87CEFA
#define LightSlateGray		(RGBColor_t)0xFF778899
#define LightSteelBlue		(RGBColor_t)0xFFB0C4DE
#define LightYellow			(RGBColor_t)0xFFFFFFE0
#define Lime				(RGBColor_t)0xFF00FF00
#define LimeGreen			(RGBColor_t)0xFF32CD32
#define Linen				(RGBColor_t)0xFFFAF0E6
#define Magenta				(RGBColor_t)0xFFFF00FF
#define Maroon				(RGBColor_t)0xFF800000
#define MediumAquamarine	(RGBColor_t)0xFF66CDAA
#define MediumBlue			(RGBColor_t)0xFF0000CD
#define MediumOrchid		(RGBColor_t)0xFFBA55D3
#define MediumPurple		(RGBColor_t)0xFF9370DB
#define MediumSeaGreen		(RGBColor_t)0xFF3CB371
#define MediumSlateBlue		(RGBColor_t)0xFF7B68EE
#define MediumSpringGreen	(RGBColor_t)0xFF00FA9A
#define MediumTurquoise		(RGBColor_t)0xFF48D1CC
#define MediumVioletRed		(RGBColor_t)0xFFC71585
#define MidnightBlue		(RGBColor_t)0xFF191970
#define MintCream			(RGBColor_t)0xFFF5FFFA
#define MistyRose			(RGBColor_t)0xFFFFE4E1
#define Moccasin			(RGBColor_t)0xFFFFE4B5
#define NavajoWhite			(RGBColor_t)0xFFFFDEAD
#define Navy				(RGBColor_t)0xFF000080
#define OldLace				(RGBColor_t)0xFFFDF5E6
#define Olive				(RGBColor_t)0xFF808000
#define OliveDrab			(RGBColor_t)0xFF6B8E23
#define Orange				(RGBColor_t)0xFFFFA500
#define OrangeRed			(RGBColor_t)0xFFFF4500
#define Orchid				(RGBColor_t)0xFFDA70D6
#define PaleGoldenrod		(RGBColor_t)0xFFEEE8AA
#define PaleGreen			(RGBColor_t)0xFF98FB98
#define PaleTurquoise		(RGBColor_t)0xFFAFEEEE
#define PaleVioletRed		(RGBColor_t)0xFFDB7093
#define PapayaWhip			(RGBColor_t)0xFFFFEFD5
#define PeachPuff			(RGBColor_t)0xFFFFDAB9
#define Peru				(RGBColor_t)0xFFCD853F
#define Pink				(RGBColor_t)0xFFFFC0CB
#define Plum				(RGBColor_t)0xFFDDA0DD
#define PowderBlue			(RGBColor_t)0xFFB0E0E6
#define Purple				(RGBColor_t)0xFF800080
#define Red					(RGBColor_t)0xFFFF0000
#define RosyBrown			(RGBColor_t)0xFFBC8F8F
#define RoyalBlue			(RGBColor_t)0xFF4169E1
#define SaddleBrown			(RGBColor_t)0xFF8B4513
#define Salmon				(RGBColor_t)0xFFFA8072
#define SandyBrown			(RGBColor_t)0xFFF4A460
#define SeaGreen			(RGBColor_t)0xFF2E8B57
#define SeaShell			(RGBColor_t)0xFFFFF5EE
#define Sienna				(RGBColor_t)0xFFA0522D
#define Silver				(RGBColor_t)0xFFC0C0C0
#define SkyBlue				(RGBColor_t)0xFF87CEEB
#define SlateBlue			(RGBColor_t)0xFF6A5ACD
#define SlateGray			(RGBColor_t)0xFF708090
#define Snow				(RGBColor_t)0xFFFFFAFA
#define SpringGreen			(RGBColor_t)0xFF00FF7F
#define SteelBlue			(RGBColor_t)0xFF4682B4
#define Tan					(RGBColor_t)0xFFD2B48C
#define Teal				(RGBColor_t)0xFF008080
#define Thistle				(RGBColor_t)0xFFD8BFD8
#define Tomato				(RGBColor_t)0x00FF6347
#define Transparent			((RGBColor_t)((uint32_t)0x00FFFFFF))
#define Turquoise			(RGBColor_t)0xFF40E0D0
#define Violet				(RGBColor_t)0xFFEE82EE
#define Wheat				(RGBColor_t)0xFFF5DEB3
#define White				(RGBColor_t)0xFFFFFFFF
#define WhiteSmoke			(RGBColor_t)0xFFF5F5F5
#define Yellow				(RGBColor_t)0xFFFFFF00
#define YellowGreen			(RGBColor_t)0xFF9ACD32

#endif
