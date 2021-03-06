// Generated by BUCKLESCRIPT VERSION 2.1.0, PLEASE EDIT WITH CARE
'use strict';

var Edu         = require("./Edu.js");
var React       = require("react");
var Footer      = require("./Footer.js");
var Profesional = require("./Profesional.js");
var ReasonReact = require("reason-react/lib/js/src/ReasonReact.js");

((require('./Body.css')));

var component = ReasonReact.statelessComponent("Body");

function make() {
  var newrecord = component.slice();
  newrecord[/* render */9] = (function () {
      return React.createElement("div", {
                  className: "body"
                }, React.createElement("div", {
                      className: "parts"
                    }, React.createElement("h4", {
                          className: "sub-title"
                        }, "About me, Paul"), React.createElement("p", {
                          className: "text"
                        }, "My name is Paul Rosset, I'm from the south of France.\n                I like creating and make the things great. I am among those who thinks that the perseverance is the key to succeed.")), React.createElement("div", {
                      className: "parts"
                    }, React.createElement("h4", {
                          className: "sub-title"
                        }, "About profesional experience"), ReasonReact.element(/* None */0, /* None */0, Profesional.make(/* array */[]))), React.createElement("div", {
                      className: "parts"
                    }, React.createElement("h4", {
                          className: "sub-title"
                        }, "School"), ReasonReact.element(/* None */0, /* None */0, Edu.make(/* array */[]))), ReasonReact.element(/* None */0, /* None */0, Footer.make(/* array */[])));
    });
  return newrecord;
}

exports.component = component;
exports.make      = make;
/*  Not a pure module */
