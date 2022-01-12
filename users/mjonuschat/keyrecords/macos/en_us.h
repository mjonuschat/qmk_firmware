// Copyright 2021 Morton Jonuschat <mjonuschat@gmail.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// .__   __.  _______   ______       __          ___   ____    ____  _______ .______          __
// |  \ |  | |   ____| /  __  \     |  |        /   \  \   \  /   / |   ____||   _  \        /_ |
// |   \|  | |  |__   |  |  |  |    |  |       /  ^  \  \   \/   /  |  |__   |  |_)  |        | |
// |  . `  | |   __|  |  |  |  |    |  |      /  /_\  \  \_    _/   |   __|  |      /         | |
// |  |\   | |  |____ |  `--'  |    |  `----./  _____  \   |  |     |  |____ |  |\  \----.    | |
// |__| \__| |_______| \______/     |_______/__/     \__\  |__|     |_______|| _| `._____|    |_|

// Row 1
// ========================================================================================================================
#define NEO_DEAD_CIRCUMFLEX KC_NO  // ^ - U+02C6 Modifier Letter Circumflex Accent (Dead)
#define NEO_DEAD_GRAVE KC_NO       // ˋ - U+02CB Modifier Letter Grave Accent (Dead)

// Row 2
// ========================================================================================================================
#define NEO_SMALL_SHARP_S LALT(KC_S)  // ß - U+00DF Latin Small Letter Sharp S
#define NEO_DEAD_ACUTE KC_NO          // ˊ - U+02CA Modifier Letter Acute Accent

// .__   __.  _______   ______       __          ___   ____    ____  _______ .______          ___
// |  \ |  | |   ____| /  __  \     |  |        /   \  \   \  /   / |   ____||   _  \        |__ \.
// |   \|  | |  |__   |  |  |  |    |  |       /  ^  \  \   \/   /  |  |__   |  |_)  |          ) |
// |  . `  | |   __|  |  |  |  |    |  |      /  /_\  \  \_    _/   |   __|  |      /          / /
// |  |\   | |  |____ |  `--'  |    |  `----./  _____  \   |  |     |  |____ |  |\  \----.    / /_
// |__| \__| |_______| \______/     |_______/__/     \__\  |__|     |_______|| _| `._____|   |____|

// Row 1
// ========================================================================================================================
#define NEO_DEAD_CARON KC_NO              // ˇ - U+02C7 Caron (Dead)
#define NEO_DEGREE LSFT(LALT(KC_8))       // ° - U+00B0 Degree Sign
#define NEO_SECTION LALT(KC_6)            // § - U+00A7 Section Sign
#define NEO_SCRIPT_SMALL_L KC_NO          // ℓ - U+2113 Script Small L
#define NEO_RDAQM LSFT(LALT(KC_BSLASH))   // » - U+00BB Right-Pointing Double Angle Quotation Mark
#define NEO_LDAQM LALT(KC_BSLASH)         // « - U+00AB Left-Pointing Double Angle Quotation Mark
#define NEO_DOLLAR LSFT(KC_4)             // $ - U+0024 Dollar Sign
#define NEO_EURO LSFT(LALT(KC_2))         // € - U+20AC Euro Sign
#define NEO_DL9QM LSFT(LALT(KC_W))        // „ - U+201E Double Low-9 Quotation Mark
#define NEO_LDQM LALT(KC_LBRACKET)        // “ - U+201C Left Double Quotation Mark
#define NEO_RDQM LSFT(LALT(KC_LBRACKET))  // “ - U+201C Left Double Quotation Mark
#define NEO_EMDASH LSFT(LALT(KC_MINUS))   // — - U+2014 Em Dash
#define NEO_DEAD_CEDILLA KC_NO            // ¸ - U+00B8 Cedilla (Dead)

// Row 2
// ========================================================================================================================
#define NEO_CAPITAL_SHARP_S KC_NO   // ẞ - U+1E9E Latin Capital Letter Sharp S
#define NEO_DEAD_SMALL_TILDE KC_NO  // ˜ - U+02DC Small Tilde (Dead)

// Row 4
// ========================================================================================================================
#define NEO_ENDASH LALT(KC_MINUS)  // – - U+2013 En Dash
#define NEO_BULLET LALT(KC_8)      // • - U+2022 Bullet

// .__   __.  _______   ______       __          ___   ____    ____  _______ .______          ____
// |  \ |  | |   ____| /  __  \     |  |        /   \  \   \  /   / |   ____||   _  \        |___ \.
// |   \|  | |  |__   |  |  |  |    |  |       /  ^  \  \   \/   /  |  |__   |  |_)  |         __) |
// |  . `  | |   __|  |  |  |  |    |  |      /  /_\  \  \_    _/   |   __|  |      /         |__ <
// |  |\   | |  |____ |  `--'  |    |  `----./  _____  \   |  |     |  |____ |  |\  \----.    ___) |
// |__| \__| |_______| \______/     |_______/__/     \__\  |__|     |_______|| _| `._____|   |____/

// Row 1
// ========================================================================================================================
#define NEO_DEAD_COCA KC_NO               // ↻ - U+21BB Clockwise Open Circle Arrow (Dead)
#define NEO_SUP1 KC_NO                    // ¹ - U+00B9 Superscript One
#define NEO_SUP2 KC_NO                    // ² - U+00B2 Superscript Two
#define NEO_SUP3 KC_NO                    // ³ - U+00B3 Superscript Three
#define NEO_SRAQM LALT(LSFT(KC_4))        // › - U+203A Single Right-Pointing Angle Quotation Mark
#define NEO_SLAQM LALT(LSFT(KC_3))        // ‹ - U+2039 Single Left-Pointing Angle Quotation Mark
#define NEO_CENT LALT(KC_4)               // ¢ - U+00A2 Cent Sign
#define NEO_YEN LALT(KC_Y)                // ¥ - U+00A5 Yen Sign
#define NEO_SL9QM LALT(LSFT(KC_0))        // ‚ - U+201A Single Low-9 Quotation Mark
#define NEO_LSQM LALT(KC_RBRACKET)        // ‘ - U+2018 Left Single Quotation Mark
#define NEO_RSQM LALT(LSFT(KC_RBRACKET))  // ’ - U+2019 Right Single Quotation Mark
// Not mapped
#define NEO_DEAD_RING_ABOVE KC_NO  // ˚ - U+02DA Ring Above (Dead)

// Row 2
// ========================================================================================================================
#define NEO_COMPOSE KC_NO              // ♫ - Special: Compose Key
#define NEO_ELLIPSIS LALT(KC_SCOLON)   // … - U+2026 Horizontal Ellipsis
#define NEO_UNDERSCORE LSFT(KC_MINUS)  // _ - U+005F Low Line / Spacing Underscore
#define NEO_LBRACKET KC_LBRACKET       // [ - U+005B Left Square Bracket
#define NEO_RBRACKET KC_RBRACKET       // ] - U+005B Right Square Bracket
#define NEO_CIRCUMFLEX LSFT(KC_6)      // ^ - U+005E Circumflex Accent
#define NEO_EXCLAMATION LSFT(KC_1)     // ! - U+0021 Exclamation Mark
#define NEO_LESSTHAN LSFT(KC_COMMA)    // < - U+003C Less-Than Sign
#define NEO_GREATERTHAN LSFT(KC_DOT)   // > - U+003C Greater-Than Sign
#define NEO_EQUAL KC_EQUAL             // = - U+003D Equals Sign
#define NEO_AMPERSAND LSFT(KC_7)       // & - U+0026 Ampersand
#define NEO_SMALL_LONG_S KC_NO         // ſ - U+017F Latin Small Letter Long S
#define NEO_DEAD_MINUS KC_NO           // ˗ - U+02D7 Modifier Letter Minus Sign

// Row 3
// ========================================================================================================================
#define NEO_BSLASH KC_BSLASH             //   - U+005C Reverse Solidus / Backslash
#define NEO_SLASH KC_SLASH               // / - U+002F Solidus / Slash
#define NEO_CLBRACKET LSFT(KC_LBRACKET)  // { - U+007B Left Curly Bracket
#define NEO_CRBRACKET LSFT(KC_RBRACKET)  // } - U+007D Right Curly Bracket
#define NEO_ASTERISK LSFT(KC_8)          // * - U+002A Asterisk
#define NEO_QUESTIONMARK LSFT(KC_SLASH)  // ? - U+003F Question Mark
#define NEO_LPARENTHESES LSFT(KC_9)      // ( - U+0028 Left Parenthesis
#define NEO_RPARENTHESES LSFT(KC_0)      // ) - U+0029 Right Parenthesis
// Duplicate: Hyphen-Minus
#define NEO_COLON LSFT(KC_SCOLON)  // : - U+003A Colon
#define NEO_AT LSFT(KC_2)          // @ - U+0040 Commercial At

// Row 4
// ========================================================================================================================
#define NEO_HASH LSFT(KC_3)  // # - U+0023 Number Sign
// Duplicate: NEO_DOLLAR
#define NEO_PIPE LSFT(KC_BSLASH)           // | - U+007C Vertical Line
#define NEO_TILDE LSFT(KC_GRAVE)           // ~ - U+007E Tilde
#define NEO_GRAVE KC_GRAVE                 // ` - U+0060 Grave Accent
#define NEO_PLUS LSFT(KC_EQUAL)            // + - U+002B Plus Sign
#define NEO_PERCENT LSFT(KC_5)             // % - U+0025 Percent Sign
#define NEO_QUOTATION_MARK LSFT(KC_QUOTE)  // " - U+0022 Quotation Mark
#define NEO_APOSTROPHE KC_QUOTE            // ' - U+0027 Apostrophe
#define NEO_SEMICOLON KC_SCOLON            // ; - U+003B Semicolon

// .__   __.  _______   ______       __          ___   ____    ____  _______ .______          _  _
// |  \ |  | |   ____| /  __  \     |  |        /   \  \   \  /   / |   ____||   _  \        | || |
// |   \|  | |  |__   |  |  |  |    |  |       /  ^  \  \   \/   /  |  |__   |  |_)  |       | || |_
// |  . `  | |   __|  |  |  |  |    |  |      /  /_\  \  \_    _/   |   __|  |      /        |__   _|
// |  |\   | |  |____ |  `--'  |    |  `----./  _____  \   |  |     |  |____ |  |\  \----.      | |
// |__| \__| |_______| \______/     |_______/__/     \__\  |__|     |_______|| _| `._____|      |_|

// Row 1
// ========================================================================================================================
#define NEO_DEAD_DOT_ABOVE KC_NO          // ˙ - U+02D9 Dot Above
#define NEO_FEMININE_ORDINAL LALT(KC_9)   // ª - U+00AA Feminine Ordinal Indicator
#define NEO_MASCULINE_ORDINAL LALT(KC_0)  // º - U+00BA Masculine Ordinal Indicator
#define NEO_NUMERO_SIGN KC_NO             // № - U+2116 Numero Sign
// Not mapped
#define NEO_MIDDLE_DOT LALT(LSFT(KC_9))  // · - U+00B7 Middle Dot
#define NEO_BRITISH_POUND LALT(KC_3)     // £ - U+00A3 Pound Sign
#define NEO_CURRENCY_SIGN KC_NO          // ¤ - U+00A4 Currency Sign
#define NEO_TAB KC_TAB                   // Tab
#define NEO_KP_SLASH KC_KP_SLASH         // Keypad /
#define NEO_KP_ASTERISK KC_KP_ASTERISK   // Keypad *
#define NEO_KP_MINUS KC_KP_MINUS         // Keypad -
#define NEO_DEAD_DIAERESIS KC_NO         // ¨ - U+00A8 Diaeresis

// Row 2
// ========================================================================================================================
#define NEO_PAGE_UP KC_PAGE_UP          // Page Up
#define NEO_BACKSPACE KC_BACKSPACE      // Backspace
#define NEO_UP KC_UP                    // Up Arrow
#define NEO_DELETE KC_DELETE            // Delete
#define NEO_PAGE_DOWN KC_PAGE_DOWN      // Page Down
#define NEO_INV_EXCLAMATION LALT(KC_1)  // ¡
#define NEO_KP_7 KC_KP_7                // Keypad 7
#define NEO_KP_8 KC_KP_8                // Keypad 8
#define NEO_KP_9 KC_KP_9                // Keypad 9
#define NEO_KP_PLUS KC_KP_PLUS          // Keypad +
#define NEO_MINUS KC_NO                 // − - U+2212 Minus Sign
#define NEO_DEAD_DOUBLE_ACUTE KC_NO     // ˝ - U+02DD Double Acute Accent

// Row 3
// ========================================================================================================================
#define NEO_HOME KC_HOME                           // Home
#define NEO_LEFT KC_LEFT                           // Left Arrow
#define NEO_DOWN KC_DOWN                           // Down Arrow
#define NEO_RIGHT KC_RIGHT                         // Right Arrow
#define NEO_END KC_END                             // End
#define NEO_INV_QUESTIONMARK LALT(LSFT(KC_SLASH))  // ¿ - U+00BF Inverted Question Mark
#define NEO_KP_4 KC_KP_4                           // Keypad 4
#define NEO_KP_5 KC_KP_5                           // Keypad 5
#define NEO_KP_6 KC_KP_6                           // Keypad 6
#define NEO_KP_COMMA KC_SEPARATOR                  // Keypad
#define NEO_KP_DOT KC_KP_DOT                       // Separator

// Row 4
// ========================================================================================================================
#define NEO_ESCAPE KC_ESCAPE  // Escape#def
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
#define NEO_DEAD_RHOTIC_HOOK KC_NO     // ˞ - U+02DE Modifier Letter Rhotic Hook
#define NEO_SUB_1 KC_NO                // ₁ - U+2081 Subscript One
#define NEO_SUB_2 KC_NO                // ₂ - U+2082 Subscript One
#define NEO_SUB_3 KC_NO                // ₃ - U+2083 Subscript One
#define NEO_FEMALE_SIGN KC_NO          // ♀ - U+2640 Female Sign Emoji
#define NEO_MALE_SIGN KC_NO            // ♂ - U+2642 Male Sign Emoji
#define NEO_MALE_FEMALE_SIGN KC_NO     // ⚥ - U+26A5 Male and Female Sign
#define NEO_GREEK_KAPPA KC_NO          // ϰ - U+03F0 Greek Kappa Symbol
#define NEO_MATH_LA_BRACKET KC_NO      // ⟨ - U+27E8 Mathematical Left Angle Bracket
#define NEO_MATH_RA_BRACKET KC_NO      // ⟩ - U+27E9 Mathematical Right Angle Bracket
#define NEO_SUB_ZERO KC_NO             // ₀ - U+2080 Subscript Zero
#define NEO_NON_BREAKING_HYPHEN KC_NO  // ‑ - U+2011 Non-Breaking Hyphen
#define NEO_DEAD_GREEK_DASIA KC_NO     // ῾ - U+1FFE Greek Dasia

// Row 2
// ========================================================================================================================
#define NEO_GREEK_SMALL_XI KC_NO  // ξ - U+03BE Greek Small Letter Xi
// Not mapped
#define NEO_GREEK_SMALL_LAMBDA KC_NO  // λ - U+03BB Greek Small Letter Lamda
#define NEO_GREEK_SMALL_CHI KC_NO     // χ - U+03C7 Greek Small Letter Chi
#define NEO_GREEK_SMALL_OMEGA KC_NO   // ω - U+03C9 Greek Small Letter Omega
#define NEO_GREEK_SMALL_KAPPA KC_NO   // κ - U+03BA Greek Small Letter Kappa
#define NEO_GREEK_SMALL_PSI KC_NO     // ψ - U+03C8 Greek Small Letter Psi
#define NEO_GREEK_SMALL_GAMMA KC_NO   // γ - U+03B3 Greek Small Letter Gamma
#define NEO_GREEK_SMALL_PHI KC_NO     // φ - U+03C6 Greek Small Letter Phi
#define NEO_GREEK_PHI KC_NO           // ϕ - U+03D5 Greek Phi Symbol
#define NEO_GREEK_SMALL_SIGMA KC_NO   // ς - U+03C2 Greek Small Letter Final Sigma
#define NEO_DEAD_GREEK_SPILI KC_NO    // ᾿ - U+1FBF Greek Psili

// Row 3
// ========================================================================================================================
#define NEO_GREEK_SMALL_IOTA KC_NO     // ι - U+03B9 Greek Small Letter Iota
#define NEO_GREEK_SMALL_ALPHA KC_NO    // α - U+03B1 Greek Small Letter Alpha
#define NEO_GREEK_SMALL_EPSILON KC_NO  // ε - U+03B5 Greek Small Letter Epsilon
#define NEO_GREEK_SMALL_EPSILON KC_NO  // ε - U+03B5 Greek Small Letter Epsilon
#define NEO_GREEK_SMALL_OMICRON KC_NO  // ο - U+03BF Greek Small Letter Omicron
#define NEO_GREEK_SMALL_SIGMA KC_NO    // σ - U+03C3 Greek Small Letter Sigma
#define NEO_GREEK_SMALL_NU KC_NO       // ν - U+03BD Greek Small Letter Nu
#define NEO_GREEK_SMALL_RHO KC_NO      // ρ - U+03C1 Greek Small Letter Rho
#define NEO_GREEK_SMALL_TAU KC_NO      // τ - U+03C4 Greek Small Letter Tau
#define NEO_GREEK_SMALL_DELTA KC_NO    // δ - U+03B4 Greek Small Letter Delta
#define NEO_GREEK_SMALL_UPSILON KC_NO  // υ - U+03C5 Greek Small Letter Upsilon

// Row 4
// ========================================================================================================================
// Not mapped
#define NEO_GREEK_LUNATE_EPSILON KC_NO  // ϵ - U+03F5 Greek Lunate Epsilon Symbol
#define NEO_GREEK_SMALL_ETA KC_NO       // η - U+03B7 Greek Small Letter Eta
#define NEO_GREEK_SMALL_PI KC_NO        // π - U+03C0 Greek Small Letter Pi
#define NEO_GREEK_SMALL_ZETA KC_NO      // ζ - U+03B6 Greek Small Letter Zeta
#define NEO_GREEK_SMALL_BETA KC_NO      // β - U+03B2 Greek Small Letter Beta
#define NEO_GREEK_SMALL_MU KC_NO        // μ - U+03BC Greek Small Letter Mu
#define NEO_GREEK_RHO KC_NO             // ϱ - U+03F1 Greek Rho Symbol
#define NEO_GREEK_THETA KC_NO           // ϑ - U+03D1 Greek Theta Symbol
#define NEO_GREEK_SMALL_THETA KC_NO     // θ - U+03B8 Greek Small Letter Theta

// Row 5
// ========================================================================================================================
#define NEO_NO_BREAK_SPACE LALT(KC_SPACE)  // ⍽ - U+00A0 No-Break Space

// .__   __.  _______   ______       __          ___   ____    ____  _______ .______            __
// |  \ |  | |   ____| /  __  \     |  |        /   \  \   \  /   / |   ____||   _  \          / /
// |   \|  | |  |__   |  |  |  |    |  |       /  ^  \  \   \/   /  |  |__   |  |_)  |        / /_
// |  . `  | |   __|  |  |  |  |    |  |      /  /_\  \  \_    _/   |   __|  |      /        | '_ \.
// |  |\   | |  |____ |  `--'  |    |  `----./  _____  \   |  |     |  |____ |  |\  \----.   | (_) |
// |__| \__| |_______| \______/     |_______/__/     \__\  |__|     |_______|| _| `._____|    \___/

// Row 1
// ========================================================================================================================
#define NEO_DEAD_FULL_STOP KC_NO          // . - U+002E Full Stop
#define NEO_NOT_SIGN KC_NO                // ¬ - U+00AC Not Sign
#define NEO_LOGICAL_OR KC_NO              // ∨ - U+2228 Logical Or
#define NEO_LOGICAL_AND KC_NO             // ∧ - U+2227 Logical And
#define NEO_UP_TACK KC_NO                 // ⊥ - U+22A5 Up Tack
#define NEO_MEASURED_ANGLE KC_NO          // ∡ - U+2221 Measured Angle
#define NEO_PARALLEL_TO KC_NO             // ∥ - U+2225 Parallel To
#define NEO_RIGHTWARDS_ARROW KC_NO        // → - U+2192 Rightwards Arrow
#define NEO_INFINITY KC_NO                // ∞ - U+221E Infinity
#define NEO_PROPORTIONAL_TO KC_NO         // ∝ - U+221D Proportional To
#define NEO_EMPTY_SET KC_NO               // ∅ - U+2205 Empty Set
#define NEO_DOUBLE_DASH_HORIZONTAL KC_NO  // ╌ - U+254C Box Drawings Light Double Dash Horizontal
#define NEO_DEAD_MACRON KC_NO             // ¯ - U+00AF Macron

// Row 2
// ========================================================================================================================
#define NEO_GREEK_XI KC_NO             // Ξ - U+039E Greek Capital Letter Xi
#define NEO_SQUARE_ROOT KC_NO          // √ - U+221A Square Root
#define NEO_GREEK_LAMBDA KC_NO         // Λ - U+039B Greek Capital Letter Lamda
#define NEO_DS_CAPITAL_C KC_NO         // ℂ - U+2102 Double-Struck Capital C
#define NEO_GREEK_OMEGA KC_NO          // Ω - U+03A9 Greek Capital Letter Omega
#define NEO_MULTIPLICATION_SIGN KC_NO  // × - U+00D7 Multiplication Sign
#define NEO_GREEK_PSI KC_NO            // Ψ - U+03A8 Greek Capital Letter Psi
#define NEO_GREEK_GAMMA KC_NO          // Γ - U+0393 Greek Capital Letter Gamma
#define NEO_GREEK_PHI KC_NO            // Φ - U+03A6 Greek Capital Letter Phi
#define NEO_DS_CAPITAL_Q KC_NO         // ℚ - U+211A Double-Struck Capital Q
#define NEO_RING_OPERATOR KC_NO        // ∘ - U+2218 Ring Operator
#define NEO_DEAD_BREVE KC_NO           // ˘ - U+02D8 Breve

// Row 3
// ========================================================================================================================
#define NEO_SUBSET_OF KC_NO             // ⊂ - U+2282 Subset Of
#define NEO_INTEGRAL KC_NO              // ∫ - U+222B Integral
#define NEO_FOR_ALL KC_NO               // ∀ - U+2200 For All
#define NEO_THERE_EXISTS KC_NO          // ∃ - U+2203 There Exists
#define NEO_ELEMENT_OF KC_NO            // ∈ - U+2208 Element Of
#define NEO_GREEK_SIGMA KC_NO           // Σ - U+03A3 Greek Capital Letter Sigma
#define NEO_DS_CAPITAL_N KC_NO          // ℕ - U+2115 Double-Struck Capital N
#define NEO_DS_CAPITAL_R KC_NO          // ℝ - U+211D Double-Struck Capital R
#define NEO_PARTIAL_DIFFERENTIAL KC_NO  // ∂ - U+2202 Partial Differential
#define NEO_GREEK_DELTA KC_NO           // Δ - U+0394 Greek Capital Letter Delta
#define NEO_NABLA KC_NO                 // ∇ - U+2207 Nabla

// Row 3
// ========================================================================================================================
#define NEO_UNION KC_NO                    // ∪ - U+222A Union
#define NEO_INTERSECTION KC_NO             // ∩ - U+2229 Intersection
#define NEO_ALEF_SYMBOL KC_NO              // ℵ - U+2135 Alef Symbol
#define NEO_GREEK_PI KC_NO                 // Π - U+03A0 Greek Capital Letter Pi
#define NEO_DS_CAPITAL_Z KC_NO             // ℤ - U+2124 Double-Struck Capital Z
#define NEO_LEFTWARDS_DOUBLE_ARROW KC_NO   // ⇐ - U+21D0 Leftwards Double Arrow
#define NEO_LEFT_RIGHT_DOUBLE_ARROW KC_NO  // ⇔ - U+21D4 Left Right Double Arrow
#define NEO_RIGHTWARDS_DOUBLE_ARROW KC_NO  // ⇒ - U+21D2 Rightwards Double Arrow
#define NEO_RIGHTWARDS_ARROW_BAR KC_NO     // ↦ - U+21A6 Rightwards Arrow from Bar
#define NEO_GREEK_THETA KC_NO              // Θ - U+0398 Greek Capital Letter Theta

// Row 5
// ========================================================================================================================
#define NEO_BROKEN_BAR KC_NO  // ¦ - U+00A6 Broken Bar
