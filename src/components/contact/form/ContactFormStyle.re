open Css;

let containerStyles =
  merge([style([marginLeft(px(10)), marginRight(px(10))]), "container"]);
let submitLevelStyles =
  merge([
    style([
      background(rgb(41, 12, 171)),
      marginTop(px(5)),
      color(rgb(249, 251, 249)),
    ]),
    "level",
  ]);

let titleStyles =
  merge([
    style([marginLeft(px(20)), color(rgb(255, 255, 255))]),
    "title",
  ]);