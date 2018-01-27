[%bs.raw {|require('./Edu.css')|}];

[@bs.module] external epitech : string = "./epitech.png";
[@bs.module] external kent : string = "./kent.png";

let component = ReasonReact.statelessComponent("School");

let make = (_children) => {
    ...component,
    render: _shelf =>
        <p className="text">
            {ReasonReact.stringToElement("I'm currently studying at Epitech school, I also passed 1 year at Kent University for a Msc in Advanced computer science.")}
            <div className="schools">
                <img src={epitech} className="school"/>
                <img src={kent} className="school"/>
            </div>
        </p>
};