let get value default => switch(value) {
  | None => default
  | Some currentValue => currentValue
};

module EvilIcons = {
  external evilIcons : ReasonReact.reactClass =
    "default" [@@bs.module "react-native-vector-icons/EvilIcons"];
  let make ::name ::color=? ::size=? children =>
    ReasonReact.wrapJsForReason
      reactClass::evilIcons
      props::{"name": name, "color": get color "#000", "size": get size 16.}
      children;
};

module FontAwesome = {
  external fontAwesome : ReasonReact.reactClass =
    "default" [@@bs.module "react-native-vector-icons/FontAwesome"];
  let make ::name ::color=? ::size=? children =>
    ReasonReact.wrapJsForReason
      reactClass::fontAwesome
      props::{"name": name, "color": get color "#000", "size": get size 16.}
      children;
};
