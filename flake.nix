{
  description = "C/C++ environment";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";
    utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, utils, ... }@inputs:
    utils.lib.eachDefaultSystem (
      system:
      let
        p = import nixpkgs { inherit system; };
      in
      {
        devShell = p.mkShell {
          packages = with p; with nodePackages; [
            tree-sitter typescript-language-server
          ];
          shellHook = ''
          '';
          name = "DoduTreeSitter";
        };
      }
    );
}
