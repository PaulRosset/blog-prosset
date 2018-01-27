[%bs.raw {|require('./Body.css')|}];

let component = ReasonReact.statelessComponent("Body");

let make = (_children) => {
    ...component,
    render: _shelf => 
        <div className="body">
            <div className="parts">
                <h4 className="sub-title">{ReasonReact.stringToElement("About me, Paul")}</h4>
                <p className="text">
                {ReasonReact.stringToElement("My name is Paul Rosset, I'm from the south of France.
                I like creating and make the things great. I am among those who thinks that the perseverance is the key to succeed.")}
                </p>
            </div>
            <div className="parts">
                <h4 className="sub-title">{ReasonReact.stringToElement("About profesional experience")}</h4>
                  <Profesional/>  
            </div>
            <div className="parts">
                <h4 className="sub-title">{ReasonReact.stringToElement("School")}</h4>
                <Edu/>
            </div>
            <Footer/>
        </div>
};