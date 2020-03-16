open Css;

let footerStyles =
  merge([
    style([background(rgb(244, 244, 244)), height(px(30))]),
    "footer",
  ]);

let footerColumnsStyles = merge([style([textAlign(`center)]), "columns"]);

let footerColumnStyles =
  merge([
    style([
      color(rgb(150, 142, 117)),
      fontSize(px(12)),
      marginBottom(px(10)),
    ]),
    "column",
  ]);