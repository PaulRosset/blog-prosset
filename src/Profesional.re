[%bs.raw {|require('./Profesional.css')|}];

[@bs.module] external gfi : string = "./gfi.png";
[@bs.module] external indigen : string = "./indigen.png";
[@bs.module] external tequila : string = "./tequila.png";

type action = 
  | OnEnter
  | OnLeave
  | OnEnter2
  | OnLeave2
  | OnEnter3
  | OnLeave3;

type state = {
    date: string,
    showPopUp: bool,
    show: string,
    date2: string,
    showPopUp2: bool,
    show2: string,
    date3: string,
    showPopUp3: bool,
    show3: string
};

let component = ReasonReact.reducerComponent("Profesional");

let make = (_children) => {
    ...component,
    initialState: () => {showPopUp: false, date: "From August to December 2015", show: "none", showPopUp2: false, date2: "From October 2016 to March 2017", show2: "none", showPopUp3: false, date3: "From April 2017 to August 2017", show3: "none"},
    reducer: (action, state) =>
        switch (action) {
        | OnEnter => ReasonReact.Update({...state, showPopUp: true, show: "block"})
        | OnLeave => ReasonReact.Update({...state, showPopUp: false, show: "none"})
        | OnEnter2 => ReasonReact.Update({...state, showPopUp2: true, show2: "block"})
        | OnLeave2 => ReasonReact.Update({...state, showPopUp2: false, show2: "none"})
        | OnEnter3 => ReasonReact.Update({...state, showPopUp3: true, show3: "block"})
        | OnLeave3 => ReasonReact.Update({...state, showPopUp3: false, show3: "none"})
        }, 
    render: shelf => 
        <p className="text">
            {ReasonReact.stringToElement("During the first 3 years at the school, I had the possibilities to be an intern in these companies:")}<br/>
            <div className="profesional">
                <div className="company">
                    <img src={gfi} className="entreprise" onMouseEnter={_event => shelf.send(OnEnter)} onMouseLeave={_event => shelf.send(OnLeave)}/>
                    <div className="date first" style=(ReactDOMRe.Style.make(~display=shelf.state.show, ()))>
                        {ReasonReact.stringToElement(shelf.state.date)}
                    </div>
                </div>
                <div className="company">
                    <img src={indigen} className="entreprise" onMouseEnter={_event => shelf.send(OnEnter2)} onMouseLeave={_event => shelf.send(OnLeave2)}/>
                    <div className="date second" style=(ReactDOMRe.Style.make(~display=shelf.state.show2, ()))>
                        {ReasonReact.stringToElement(shelf.state.date2)}
                    </div>
                </div>
                <div className="company">
                    <img src={tequila} className="entreprise" onMouseEnter={_event => shelf.send(OnEnter3)} onMouseLeave={_event => shelf.send(OnLeave3)}/>
                    <div className="date third" style=(ReactDOMRe.Style.make(~display=shelf.state.show3, ()))>
                        {ReasonReact.stringToElement(shelf.state.date3)}
                    </div>
                </div>
            </div>
        </p> 
};