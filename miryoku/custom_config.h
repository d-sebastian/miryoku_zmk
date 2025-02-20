// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SEMI,          \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           U_MT(LALT, SLASH), \
U_NP,              U_NP,              &kp LSHIFT,        &mo U_SYM,         U_MT(LCTRL, RET),  &kp BSPC,          &kp SPACE,         &mo U_NAV,         U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp EXCL,          &kp AT,            &kp HASH,          &kp DOLLAR,        &kp PERCENT,       &kp CARET,         &kp AMPERSAND,     &kp LPAR,          &kp RPAR,          &kp STAR,          \
&kp N1,            &kp N2,            &kp N3,            &kp N4,            &kp N5,            &kp MINUS,         &kp EQUAL,         &kp LBKT,          &kp RBKT,          &kp APOS,          \
&kp N6,            &kp N7,            &kp N8,            &kp N9,            &kp N0,            &kp UNDER,         &kp PLUS,          &kp LBRC,          &kp RBRC,          U_MT(LALT, DQT),   \
U_NP,              U_NP,              &kp LSHIFT,        &mo U_SYM,         &kp RET,           &kp LGUI,          &kp ESC,           &kp TAB,           U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
&kp F1,            &kp F2,            &kp F3,            &kp F4,            &kp F5,            &kp F6,            &kp F7,            &kp F8,            &kp F9,            &kp F10,           \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         &kp ESC,           &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &kp GRAVE,         \
&bt BT_SEL 0,      &bt BT_SEL 1,      &bt BT_SEL 2,      &bt BT_CLR,        U_NA,              U_NA,              U_NA,              &kp PIPE,          &kp BSLH,          &kp TILDE,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_NA,              &kp SPACE,         &mo U_NAV,         U_NP,              U_NP
