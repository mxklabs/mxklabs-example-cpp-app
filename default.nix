{
  pkgs ? import <nixpkgs> {}
}:
pkgs.stdenv.mkDerivation rec {
  name = "mxklabs-example-cpp-app";
  pname = "mxklabs-example-cpp-app";
  version = "0.1.0";
  src = ./.;

  buildInputs = [
    pkgs.cmake
  ];
}