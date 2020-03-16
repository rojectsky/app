// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE

import * as React from "react";
import * as InputField$App from "../input/InputField.bs.js";
import * as TextAreaField$App from "../input/TextAreaField.bs.js";
import * as Caml_builtin_exceptions from "bs-platform/lib/es6/caml_builtin_exceptions.js";
import * as HorizontalInputField$App from "../input/HorizontalInputField.bs.js";

function SingleInputContainer(Props) {
  var config = Props.config;
  var value = Props.value;
  var onBlur = Props.onBlur;
  var result = Props.result;
  var onChange = Props.onChange;
  var match = Props.isHorizontal;
  var isHorizontal = match !== undefined ? match : false;
  var match$1 = config.containerType;
  if (match$1 >= 3) {
    throw [
          Caml_builtin_exceptions.match_failure,
          /* tuple */[
            "_none_",
            1,
            -1
          ]
        ];
  }
  switch (match$1) {
    case /* Text */0 :
        return React.createElement("div", {
                    className: "column"
                  }, isHorizontal ? React.createElement(HorizontalInputField$App.make, {
                          inputId: config.inputId,
                          value: value,
                          onChange: onChange,
                          onBlur: onBlur,
                          result: result,
                          label: config.label,
                          placeholder: config.placeholder,
                          type_: config.type_
                        }) : React.createElement(InputField$App.make, {
                          inputId: config.inputId,
                          value: value,
                          onChange: onChange,
                          onBlur: onBlur,
                          result: result,
                          label: config.label,
                          placeholder: config.placeholder,
                          type_: config.type_
                        }));
    case /* Dual */1 :
        throw [
              Caml_builtin_exceptions.match_failure,
              /* tuple */[
                "_none_",
                1,
                -1
              ]
            ];
    case /* TextArea */2 :
        return React.createElement("div", {
                    className: "column"
                  }, React.createElement(TextAreaField$App.make, {
                        inputId: config.inputId,
                        value: value,
                        onChange: onChange,
                        onBlur: onBlur,
                        result: result,
                        placeholder: config.placeholder,
                        label: config.label
                      }));
    
  }
}

var make = SingleInputContainer;

export {
  make ,
  
}
/* react Not a pure module */
