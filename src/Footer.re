[%bs.raw {|require('./Footer.css')|}];

[@bs.module] external france : string = "./france.png";
[@bs.module] external reason : string = "./reasonreact.png";

let component = ReasonReact.statelessComponent("School");

let make = (_children) => {
    ...component,
    render: _shelf =>
        <div className="footer">
            <q className="quote">{ReasonReact.stringToElement("Always be yourself unless you can be Batman then always be Batman !")}</q>
            <div>
                <img src={france} className="country"/>
            </div>
            <div className="developed">
                <img src={reason} className="reason"/>{ReasonReact.stringToElement("Proudly developed in ReasonReact")}
            </div>
        </div>
};