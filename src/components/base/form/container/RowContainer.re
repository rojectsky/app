open ContainerType;

[@react.component]
let make =
    (
      ~config1: container,
      ~value1,
      ~onBlur1,
      ~result1,
      ~onChange1,
      ~config2: container,
      ~value2,
      ~onBlur2,
      ~result2,
      ~onChange2,
      ~isHorizontal: bool=false,
    ) =>
  <div className="columns">
    <SingleInputContainer
      config=config1
      value=value1
      onBlur=onBlur1
      result=result1
      onChange=onChange1
      isHorizontal
    />
    <SingleInputContainer
      config=config2
      value=value2
      onBlur=onBlur2
      result=result2
      onChange=onChange2
      isHorizontal
    />
  </div>;