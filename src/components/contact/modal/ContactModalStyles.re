open Css;

let modalHeaderStyles =
  merge([
    style([backgroundColor(white), borderBottomWidth(px(0))]),
    "modal-card-head",
  ]);

let checkIconStyles = style([marginLeft(px(5))]);

let saveMessageStyles =
  style([color(rgb(181, 128, 125)), marginTop(px(5))]);

let labelStyles =
  merge([
    style([color(rgb(181, 128, 125)), textAlign(`right)]),
    "column",
  ]);

let valueStyles = merge(["column", "has-text-blac"]);