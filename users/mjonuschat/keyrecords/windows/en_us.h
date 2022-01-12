// Copyright 2021 Morton Jonuschat <mjonuschat@gmail.com>
// SPDX-License-Identifier: GPL-2.0-or-later

// This configuration relies heavily on WinCompose for special characters.

#pragma once

// .__   __.  _______   ______       __          ___   ____    ____  _______ .______          __
// |  \ |  | |   ____| /  __  \     |  |        /   \  \   \  /   / |   ____||   _  \        /_ |
// |   \|  | |  |__   |  |  |  |    |  |       /  ^  \  \   \/   /  |  |__   |  |_)  |        | |
// |  . `  | |   __|  |  |  |  |    |  |      /  /_\  \  \_    _/   |   __|  |      /         | |
// |  |\   | |  |____ |  `--'  |    |  `----./  _____  \   |  |     |  |____ |  |\  \----.    | |
// |__| \__| |_______| \______/     |_______/__/     \__\  |__|     |_______|| _| `._____|    |_|

// Row 1
// ========================================================================================================================
#define NEO_DEAD_CIRCUMFLEX UC(0x0302)  // ^ - U+0302 Combining Circumflex Accent
#define NEO_DEAD_GRAVE UC(0x0300)       // ˋ - U+0300 Combining Grave Accent

// Row 2
// ========================================================================================================================
#define NEO_SMALL_SHARP_S UC(0x00DF)  // ß - U+00DF Latin Small Letter Sharp S
#define NEO_DEAD_ACUTE UC(0x0301)     // ˊ - U+0301 Combining Acute Accent

// .__   __.  _______   ______       __          ___   ____    ____  _______ .______          ___
// |  \ |  | |   ____| /  __  \     |  |        /   \  \   \  /   / |   ____||   _  \        |__ \.
// |   \|  | |  |__   |  |  |  |    |  |       /  ^  \  \   \/   /  |  |__   |  |_)  |          ) |
// |  . `  | |   __|  |  |  |  |    |  |      /  /_\  \  \_    _/   |   __|  |      /          / /
// |  |\   | |  |____ |  `--'  |    |  `----./  _____  \   |  |     |  |____ |  |\  \----.    / /_
// |__| \__| |_______| \______/     |_______/__/     \__\  |__|     |_______|| _| `._____|   |____|

// Row 1
// ========================================================================================================================
#define NEO_DEAD_CARON UC(0x030C)      // ˇ - U+030C Combining Caron
#define NEO_DEGREE UC(0x00B0)          // ° - U+00B0 Degree Sign
#define NEO_SECTION UC(0x00A7)         // § - U+00A7 Section Sign
#define NEO_SCRIPT_SMALL_L UC(0x2113)  // ℓ - U+2113 Script Small L
#define NEO_RDAQM UC(0x00BB)           // » - U+00BB Right-Pointing Double Angle Quotation Mark
#define NEO_LDAQM UC(0x00AB)           // « - U+00AB Left-Pointing Double Angle Quotation Mark
#define NEO_DOLLAR KC_DOLLAR           // $ - U+0024 Dollar Sign
#define NEO_EURO UC(0x20AC)            // € - U+20AC Euro Sign
#define NEO_DL9QM UC(0x201E)           // „ - U+201E Double Low-9 Quotation Mark
#define NEO_LDQM UC(0x201C)            // “ - U+201C Left Double Quotation Mark
#define NEO_RDQM UC(0x201D)            // “ - U+201D Left Double Quotation Mark
#define NEO_EMDASH UC(0x2014)          // — - U+2014 Em Dash
#define NEO_DEAD_CEDILLA UC(0x0327)    // ¸ - U+0327 Combining Cedilla

// Row 2
// ========================================================================================================================
#define NEO_CAPITAL_SHARP_S UC(0x1E9E)   // ẞ - U+1E9E Latin Capital Letter Sharp S
#define NEO_DEAD_SMALL_TILDE UC(0x0303)  // ˜ - U+0303 Combining Tilde

// Row 4
// ========================================================================================================================
#define NEO_ENDASH UC(0x2013)  // – - U+2013 En Dash
#define NEO_BULLET UC(0x2022)  // • - U+2022 Bullet

// .__   __.  _______   ______       __          ___   ____    ____  _______ .______          ____
// |  \ |  | |   ____| /  __  \     |  |        /   \  \   \  /   / |   ____||   _  \        |___ \.
// |   \|  | |  |__   |  |  |  |    |  |       /  ^  \  \   \/   /  |  |__   |  |_)  |         __) |
// |  . `  | |   __|  |  |  |  |    |  |      /  /_\  \  \_    _/   |   __|  |      /         |__ <
// |  |\   | |  |____ |  `--'  |    |  `----./  _____  \   |  |     |  |____ |  |\  \----.    ___) |
// |__| \__| |_______| \______/     |_______/__/     \__\  |__|     |_______|| _| `._____|   |____/

// Row 1
// ========================================================================================================================
#define NEO_DEAD_COCA KC_NO   // ↻ - U+21BB Clockwise Open Circle Arrow (Dead)
#define NEO_SUP1 UC(0x00B9)   // ¹ - U+00B9 Superscript One
#define NEO_SUP2 UC(0x00B2)   // ² - U+00B2 Superscript Two
#define NEO_SUP3 UC(0x00B3)   // ³ - U+00B3 Superscript Three
#define NEO_SRAQM UC(0x203A)  // › - U+203A Single Right-Pointing Angle Quotation Mark
#define NEO_SLAQM UC(0x2039)  // ‹ - U+2039 Single Left-Pointing Angle Quotation Mark
#define NEO_CENT UC(0x00A2)   // ¢ - U+00A2 Cent Sign
#define NEO_YEN UC(0x00A5)    // ¥ - U+00A5 Yen Sign
#define NEO_SL9QM UC(0x201A)  // ‚ - U+201A Single Low-9 Quotation Mark
#define NEO_LSQM UC(0x2018)   // ‘ - U+2018 Left Single Quotation Mark
#define NEO_RSQM UC(0x2019)   // ’ - U+2019 Right Single Quotation Mark
// Not mapped
#define NEO_DEAD_RING_ABOVE UC(0x030A)  // ˚ - U+030A Combining Ring Above

// Row 2
// ========================================================================================================================
#define NEO_COMPOSE UNICODE_KEY_WINC            // ♫ - Special: Compose Key
#define NEO_ELLIPSIS UC(0x2026)                 // … - U+2026 Horizontal Ellipsis
#define NEO_UNDERSCORE KC_UNDERSCORE            // _ - U+005F Low Line / Spacing Underscore
#define NEO_LBRACKET KC_LBRACKET                // [ - U+005B Left Square Bracket
#define NEO_RBRACKET KC_RBRACKET                // ] - U+005B Right Square Bracket
#define NEO_CIRCUMFLEX KC_CIRCUMFLEX            // ^ - U+005E Circumflex Accent
#define NEO_EXCLAMATION KC_EXCLAIM              // ! - U+0021 Exclamation Mark
#define NEO_LESSTHAN KC_LEFT_ANGLE_BRACKET      // < - U+003C Less-Than Sign
#define NEO_GREATERTHAN KC_RIGHT_ANGLE_BRACKET  // > - U+003C Greater-Than Sign
#define NEO_EQUAL KC_EQUAL                      // = - U+003D Equals Sign
#define NEO_AMPERSAND KC_AMPERSAND              // & - U+0026 Ampersand
#define NEO_SMALL_LONG_S UC(0x017F)             // ſ - U+017F Latin Small Letter Long S
#define NEO_DEAD_MINUS UC(0x0338)               // ˗ - U+0338 Combining Long Solidus Overlay

// Row 3
// ========================================================================================================================
#define NEO_BSLASH KC_BSLASH                //   - U+005C Reverse Solidus / Backslash
#define NEO_SLASH KC_SLASH                  // / - U+002F Solidus / Slash
#define NEO_CLBRACKET KC_LEFT_CURLY_BRACE   // { - U+007B Left Curly Bracket
#define NEO_CRBRACKET KC_RIGHT_CURLY_BRACE  // } - U+007D Right Curly Bracket
#define NEO_ASTERISK KC_ASTERISK            // * - U+002A Asterisk
#define NEO_QUESTIONMARK KC_QUESTION        // ? - U+003F Question Mark
#define NEO_LPARENTHESES KC_LEFT_PAREN      // ( - U+0028 Left Parenthesis
#define NEO_RPARENTHESES KC_RIGHT_PAREN     // ) - U+0029 Right Parenthesis
// Duplicate: Hyphen-Minus
#define NEO_COLON KC_COLON  // : - U+003A Colon
#define NEO_AT KC_AT        // @ - U+0040 Commercial At

// Row 4
// ========================================================================================================================
#define NEO_HASH KC_HASH  // # - U+0023 Number Sign
// Duplicate: NEO_DOLLAR
#define NEO_PIPE KC_PIPE                    // | - U+007C Vertical Line
#define NEO_TILDE KC_TILDE                  // ~ - U+007E Tilde
#define NEO_GRAVE KC_GRAVE                  // ` - U+0060 Grave Accent
#define NEO_PLUS KC_PLUS                    // + - U+002B Plus Sign
#define NEO_PERCENT KC_PERCENT              // % - U+0025 Percent Sign
#define NEO_QUOTATION_MARK KC_DOUBLE_QUOTE  // " - U+0022 Quotation Mark
#define NEO_APOSTROPHE KC_QUOTE             // ' - U+0027 Apostrophe
#define NEO_SEMICOLON KC_SCOLON             // ; - U+003B Semicolon

// .__   __.  _______   ______       __          ___   ____    ____  _______ .______          _  _
// |  \ |  | |   ____| /  __  \     |  |        /   \  \   \  /   / |   ____||   _  \        | || |
// |   \|  | |  |__   |  |  |  |    |  |       /  ^  \  \   \/   /  |  |__   |  |_)  |       | || |_
// |  . `  | |   __|  |  |  |  |    |  |      /  /_\  \  \_    _/   |   __|  |      /        |__   _|
// |  |\   | |  |____ |  `--'  |    |  `----./  _____  \   |  |     |  |____ |  |\  \----.      | |
// |__| \__| |_______| \______/     |_______/__/     \__\  |__|     |_______|| _| `._____|      |_|

// Row 1
// ========================================================================================================================
#define NEO_DEAD_DOT_ABOVE UC(0x0307)     // ˙ - U+0307 Combining Dot Above
#define NEO_FEMININE_ORDINAL UC(0x00AA)   // ª - U+00AA Feminine Ordinal Indicator
#define NEO_MASCULINE_ORDINAL UC(0x00BA)  // º - U+00BA Masculine Ordinal Indicator
#define NEO_NUMERO_SIGN UC(0x2116)        // № - U+2116 Numero Sign
// Not mapped
#define NEO_MIDDLE_DOT UC(0x00B7)       // · - U+00B7 Middle Dot
#define NEO_BRITISH_POUND UC(0x00A3)    // £ - U+00A3 Pound Sign
#define NEO_CURRENCY_SIGN UC(0x00A4)    // ¤ - U+00A4 Currency Sign
#define NEO_TAB KC_TAB                  // Tab
#define NEO_KP_SLASH KC_KP_SLASH        // Keypad /
#define NEO_KP_ASTERISK KC_KP_ASTERISK  // Keypad *
#define NEO_KP_MINUS KC_KP_MINUS        // Keypad -
#define NEO_DEAD_DIAERESIS UC(0x0308)   // ¨ - U+0308 Combining Diaeresis

// Row 2
// ========================================================================================================================
#define NEO_PAGE_UP KC_PAGE_UP            // Page Up
#define NEO_BACKSPACE KC_BACKSPACE        // Backspace
#define NEO_UP KC_UP                      // Up Arrow
#define NEO_DELETE KC_DELETE              // Delete
#define NEO_PAGE_DOWN KC_PAGE_DOWN        // Page Down
#define NEO_INV_EXCLAMATION UC(0x00A1)    // ¡ - U+00A1 Inverted Exclamation Mark
#define NEO_KP_7 KC_KP_7                  // Keypad 7
#define NEO_KP_8 KC_KP_8                  // Keypad 8
#define NEO_KP_9 KC_KP_9                  // Keypad 9
#define NEO_KP_PLUS KC_KP_PLUS            // Keypad +
#define NEO_MINUS UC(0x2212)              // − - U+2212 Minus Sign
#define NEO_DEAD_DOUBLE_ACUTE UC(0x030B)  // ˝ - U+030B Combining Double Acute Accent

// Row 3
// ========================================================================================================================
#define NEO_HOME KC_HOME                 // Home
#define NEO_LEFT KC_LEFT                 // Left Arrow
#define NEO_DOWN KC_DOWN                 // Down Arrow
#define NEO_RIGHT KC_RIGHT               // Right Arrow
#define NEO_END KC_END                   // End
#define NEO_INV_QUESTIONMARK UC(0x00BF)  // ¿ - U+00BF Inverted Question Mark
#define NEO_KP_4 KC_KP_4                 // Keypad 4
#define NEO_KP_5 KC_KP_5                 // Keypad 5
#define NEO_KP_6 KC_KP_6                 // Keypad 6
#define NEO_KP_COMMA KC_SEPARATOR        // Keypad
#define NEO_KP_DOT KC_KP_DOT             // Separator

// Row 4
// ========================================================================================================================
#define NEO_ESCAPE KC_ESCAPE  // Escape
// Duplicate: Tab
#define NEO_INSERT KC_INSERT   // Insert
#define NEO_KP_ENTER KC_ENTER  // Return (Enter)
#define NEO_UNDO KC_NO         // Undo Function
// Duplicate: Colon
#define NEO_KP_1 KC_KP_1  // Keypad 1
#define NEO_KP_2 KC_KP_2  // Keypad 2
#define NEO_KP_3 KC_KP_3  // Keypad 3
// Duplicate: Semicolon

// Row 5
// ========================================================================================================================
#define NEO_KP_0 KC_KP_0  // Keypad 0

// .__   __.  _______   ______       __          ___   ____    ____  _______ .______          _____
// |  \ |  | |   ____| /  __  \     |  |        /   \  \   \  /   / |   ____||   _  \        | ____|
// |   \|  | |  |__   |  |  |  |    |  |       /  ^  \  \   \/   /  |  |__   |  |_)  |       | |__
// |  . `  | |   __|  |  |  |  |    |  |      /  /_\  \  \_    _/   |   __|  |      /        |___ \.
// |  |\   | |  |____ |  `--'  |    |  `----./  _____  \   |  |     |  |____ |  |\  \----.    ___) |
// |__| \__| |_______| \______/     |_______/__/     \__\  |__|     |_______|| _| `._____|   |____/

// Row 1
// ========================================================================================================================
#define NEO_DEAD_RHOTIC_HOOK KC_NO          // ˞ - U+02DE Modifier Letter Rhotic Hook
#define NEO_SUB_1 UC(0x2081)                // ₁ - U+2081 Subscript One
#define NEO_SUB_2 UC(0x2082)                // ₂ - U+2082 Subscript One
#define NEO_SUB_3 UC(0x2083)                // ₃ - U+2083 Subscript One
#define NEO_FEMALE_SIGN UC(0x2640)          // ♀ - U+2640 Female Sign Emoji
#define NEO_MALE_SIGN UC(0x2642)            // ♂ - U+2642 Male Sign Emoji
#define NEO_MALE_FEMALE_SIGN UC(0x26A5)     // ⚥ - U+26A5 Male and Female Sign
#define NEO_GREEK_KAPPA UC(0x03F0)          // ϰ - U+03F0 Greek Kappa Symbol
#define NEO_MATH_LA_BRACKET UC(0x27E8)      // ⟨ - U+27E8 Mathematical Left Angle Bracket
#define NEO_MATH_RA_BRACKET UC(0x27E9)      // ⟩ - U+27E9 Mathematical Right Angle Bracket
#define NEO_SUB_ZERO UC(0x2080)             // ₀ - U+2080 Subscript Zero
#define NEO_NON_BREAKING_HYPHEN UC(0x2011)  // ‑ - U+2011 Non-Breaking Hyphen
#define NEO_DEAD_GREEK_DASIA UC(0x0314)     // ῾ - U+0314 Combining Reversed Comma Above

// Row 2
// ========================================================================================================================
#define NEO_GREEK_SMALL_XI UC(0x03BE)  // ξ - U+03BE Greek Small Letter Xi
// Not mapped
#define NEO_GREEK_SMALL_LAMBDA UC(0x03BB)  // λ - U+03BB Greek Small Letter Lamda
#define NEO_GREEK_SMALL_CHI UC(0x03C7)     // χ - U+03C7 Greek Small Letter Chi
#define NEO_GREEK_SMALL_OMEGA UC(0x03C9)   // ω - U+03C9 Greek Small Letter Omega
#define NEO_GREEK_SMALL_KAPPA UC(0x03BA)   // κ - U+03BA Greek Small Letter Kappa
#define NEO_GREEK_SMALL_PSI UC(0x03C8)     // ψ - U+03C8 Greek Small Letter Psi
#define NEO_GREEK_SMALL_GAMMA UC(0x03B3)   // γ - U+03B3 Greek Small Letter Gamma
#define NEO_GREEK_SMALL_PHI UC(0x03C6)     // φ - U+03C6 Greek Small Letter Phi
#define NEO_GREEK_PHI UC(0x03D5)           // ϕ - U+03D5 Greek Phi Symbol
#define NEO_GREEK_SMALL_SIGMA UC(0x03C2)   // ς - U+03C2 Greek Small Letter Final Sigma
#define NEO_DEAD_GREEK_SPILI UC(0x0313)    // ᾿ - U+0313 Combining Comma Above

// Row 3
// ========================================================================================================================
#define NEO_GREEK_SMALL_IOTA UC(0x03B9)     // ι - U+03B9 Greek Small Letter Iota
#define NEO_GREEK_SMALL_ALPHA UC(0x03B1)    // α - U+03B1 Greek Small Letter Alpha
#define NEO_GREEK_SMALL_EPSILON UC(0x03B5)  // ε - U+03B5 Greek Small Letter Epsilon
#define NEO_GREEK_SMALL_OMICRON UC(0x03BF)  // ο - U+03BF Greek Small Letter Omicron
#define NEO_GREEK_SMALL_NU UC(0x03BD)       // ν - U+03BD Greek Small Letter Nu
#define NEO_GREEK_SMALL_RHO UC(0x03C1)      // ρ - U+03C1 Greek Small Letter Rho
#define NEO_GREEK_SMALL_TAU UC(0x03C4)      // τ - U+03C4 Greek Small Letter Tau
#define NEO_GREEK_SMALL_DELTA UC(0x03B4)    // δ - U+03B4 Greek Small Letter Delta
#define NEO_GREEK_SMALL_UPSILON UC(0x03C5)  // υ - U+03C5 Greek Small Letter Upsilon

// Row 4
// ========================================================================================================================
// Not mapped
#define NEO_GREEK_LUNATE_EPSILON UC(0x03F5)  // ϵ - U+03F5 Greek Lunate Epsilon Symbol
#define NEO_GREEK_SMALL_ETA UC(0x03B7)       // η - U+03B7 Greek Small Letter Eta
#define NEO_GREEK_SMALL_PI UC(0x03C0)        // π - U+03C0 Greek Small Letter Pi
#define NEO_GREEK_SMALL_ZETA UC(0x03B6)      // ζ - U+03B6 Greek Small Letter Zeta
#define NEO_GREEK_SMALL_BETA UC(0x03B2)      // β - U+03B2 Greek Small Letter Beta
#define NEO_GREEK_SMALL_MU UC(0x03BC)        // μ - U+03BC Greek Small Letter Mu
#define NEO_GREEK_RHO UC(0x03F1)             // ϱ - U+03F1 Greek Rho Symbol
#define NEO_GREEK_THETA UC(0x03D1)           // ϑ - U+03D1 Greek Theta Symbol
#define NEO_GREEK_SMALL_THETA UC(0x03B8)     // θ - U+03B8 Greek Small Letter Theta

// Row 5
// ========================================================================================================================
#define NEO_NO_BREAK_SPACE UC(0x00A0)  // ⍽ - U+00A0 No-Break Space

// .__   __.  _______   ______       __          ___   ____    ____  _______ .______            __
// |  \ |  | |   ____| /  __  \     |  |        /   \  \   \  /   / |   ____||   _  \          / /
// |   \|  | |  |__   |  |  |  |    |  |       /  ^  \  \   \/   /  |  |__   |  |_)  |        / /_
// |  . `  | |   __|  |  |  |  |    |  |      /  /_\  \  \_    _/   |   __|  |      /        | '_ \.
// |  |\   | |  |____ |  `--'  |    |  `----./  _____  \   |  |     |  |____ |  |\  \----.   | (_) |
// |__| \__| |_______| \______/     |_______/__/     \__\  |__|     |_______|| _| `._____|    \___/

// Row 1
// ========================================================================================================================
#define NEO_DEAD_FULL_STOP UC(0x0323)          // . - U+0323 Combining Dot Below
#define NEO_NOT_SIGN UC(0x00AC)                // ¬ - U+00AC Not Sign
#define NEO_LOGICAL_OR UC(0x2228)              // ∨ - U+2228 Logical Or
#define NEO_LOGICAL_AND UC(0x2227)             // ∧ - U+2227 Logical And
#define NEO_UP_TACK UC(0x22A5)                 // ⊥ - U+22A5 Up Tack
#define NEO_MEASURED_ANGLE UC(0x2221)          // ∡ - U+2221 Measured Angle
#define NEO_PARALLEL_TO UC(0x2225)             // ∥ - U+2225 Parallel To
#define NEO_RIGHTWARDS_ARROW UC(0x2192)        // → - U+2192 Rightwards Arrow
#define NEO_INFINITY UC(0x221E)                // ∞ - U+221E Infinity
#define NEO_PROPORTIONAL_TO UC(0x221D)         // ∝ - U+221D Proportional To
#define NEO_EMPTY_SET UC(0x2205)               // ∅ - U+2205 Empty Set
#define NEO_DOUBLE_DASH_HORIZONTAL UC(0x254C)  // ╌ - U+254C Box Drawings Light Double Dash Horizontal
#define NEO_DEAD_MACRON UC(0x0304)             // ¯ - U+0304 Combining Macron

// Row 2
// ========================================================================================================================
#define NEO_GREEK_XI UC(0x039E)             // Ξ - U+039E Greek Capital Letter Xi
#define NEO_SQUARE_ROOT UC(0x221A)          // √ - U+221A Square Root
#define NEO_GREEK_LAMBDA UC(0x039B)         // Λ - U+039B Greek Capital Letter Lamda
#define NEO_DS_CAPITAL_C UC(0x2102)         // ℂ - U+2102 Double-Struck Capital C
#define NEO_GREEK_OMEGA UC(0x03A9)          // Ω - U+03A9 Greek Capital Letter Omega
#define NEO_MULTIPLICATION_SIGN UC(0x00D7)  // × - U+00D7 Multiplication Sign
#define NEO_GREEK_PSI UC(0x03A8)            // Ψ - U+03A8 Greek Capital Letter Psi
#define NEO_GREEK_GAMMA UC(0x0393)          // Γ - U+0393 Greek Capital Letter Gamma
#define NEO_DS_CAPITAL_Q UC(0x211A)         // ℚ - U+211A Double-Struck Capital Q
#define NEO_RING_OPERATOR UC(0x2218)        // ∘ - U+2218 Ring Operator
#define NEO_DEAD_BREVE UC(0x0306)           // ˘ - U+0306 Combining Breve

// Row 3
// ========================================================================================================================
#define NEO_SUBSET_OF UC(0x2282)             // ⊂ - U+2282 Subset Of
#define NEO_INTEGRAL UC(0x222B)              // ∫ - U+222B Integral
#define NEO_FOR_ALL UC(0x2200)               // ∀ - U+2200 For All
#define NEO_THERE_EXISTS UC(0x2203)          // ∃ - U+2203 There Exists
#define NEO_ELEMENT_OF UC(0x2208)            // ∈ - U+2208 Element Of
#define NEO_GREEK_SIGMA UC(0x03A3)           // Σ - U+03A3 Greek Capital Letter Sigma
#define NEO_DS_CAPITAL_N UC(0x2115)          // ℕ - U+2115 Double-Struck Capital N
#define NEO_DS_CAPITAL_R UC(0x211D)          // ℝ - U+211D Double-Struck Capital R
#define NEO_PARTIAL_DIFFERENTIAL UC(0x2202)  // ∂ - U+2202 Partial Differential
#define NEO_GREEK_DELTA UC(0x0394)           // Δ - U+0394 Greek Capital Letter Delta
#define NEO_NABLA UC(0x2207)                 // ∇ - U+2207 Nabla

// Row 3
// ========================================================================================================================
#define NEO_UNION UC(0x222A)                    // ∪ - U+222A Union
#define NEO_INTERSECTION UC(0x2229)             // ∩ - U+2229 Intersection
#define NEO_ALEF_SYMBOL UC(0x2135)              // ℵ - U+2135 Alef Symbol
#define NEO_GREEK_PI UC(0x03A0)                 // Π - U+03A0 Greek Capital Letter Pi
#define NEO_DS_CAPITAL_Z UC(0x2124)             // ℤ - U+2124 Double-Struck Capital Z
#define NEO_LEFTWARDS_DOUBLE_ARROW UC(0x21D0)   // ⇐ - U+21D0 Leftwards Double Arrow
#define NEO_LEFT_RIGHT_DOUBLE_ARROW UC(0x21D4)  // ⇔ - U+21D4 Left Right Double Arrow
#define NEO_RIGHTWARDS_DOUBLE_ARROW UC(0x21D2)  // ⇒ - U+21D2 Rightwards Double Arrow
#define NEO_RIGHTWARDS_ARROW_BAR UC(0x21A6)     // ↦ - U+21A6 Rightwards Arrow from Bar

// Row 5
// ========================================================================================================================
#define NEO_BROKEN_BAR UC(0x00A6)  // ¦ - U+00A6 Broken Bar
