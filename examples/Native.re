open Revery.UI;
open Revery.UI.Components;
open Revery.Platform;

module NativeExamples = {
  let make = (~window, ()) => {
    let increment = () => {
      Dialog.alert(window, "Hello, world");
    };

    let containerStyle =
      Style.[
        position(`Absolute),
        justifyContent(`Center),
        alignItems(`Center),
        bottom(0),
        top(0),
        left(0),
        right(0),
      ];

    <View style=containerStyle>
      <Button title="Alert" onClick=increment />
    </View>;
  };
};

let render = window => <NativeExamples window />;
