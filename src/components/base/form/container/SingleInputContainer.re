open ContainerType;

[@react.component]
let make =
    (
      ~config: container,
      ~value,
      ~onBlur,
      ~result,
      ~onChange,
      ~isHorizontal: bool=false,
    ) => {
  switch (config.containerType) {
  | Text =>
    <div className="column">
      {if (isHorizontal) {
         <HorizontalInputField
           inputId={config.inputId}
           label={config.label}
           placeholder={config.placeholder}
           type_={config.type_}
           value
           onBlur
           onChange
           result
         />;
       } else {
         <InputField
           inputId={config.inputId}
           label={config.label}
           placeholder={config.placeholder}
           type_={config.type_}
           value
           onBlur
           onChange
           result
         />;
       }}
    </div>
  | TextArea =>
    <div className="column">
      <TextAreaField
        inputId={config.inputId}
        label={config.label}
        placeholder={config.placeholder}
        value
        onBlur
        onChange
        result
      />
    </div>
  };
};