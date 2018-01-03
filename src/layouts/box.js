import React from "react";
import styled from "styled-components";

const Wrap = styled.div`
  margin: 50px;
  perspective: 1000px;
  perspective-origin: 50% 50%;
  display: inline-block;
`;

const Cube = styled.div`
  margin: auto;
  position: relative;
  height: 80px;
  width: 80px;
  transform-style: preserve-3d;
  animation: rotate${props => props.anim} 20s infinite linear;

  @keyframes rotate0 {
    from {
      transform: rotateX(deg) rotateY(0deg);
    }

    to {
      transform: rotateX(180deg) rotateY(180deg);
    }
  }
  @keyframes rotate1 {
    from {
      transform: rotateX(360deg) rotateY(360deg);
    }

    to {
      transform: rotateX(180deg) rotateY(180deg);
    }
  }
  @keyframes rotate2 {
    from {
      transform: rotateX(180deg) rotateY(180deg);
    }

    to {
      transform: rotateX(360deg) rotateY(360deg);
    }
  }
`;

const Face = styled.div`
  position: absolute;
  box-sizing: border-box;
  padding: 10px;
  height: 100%;
  width: 100%;
  opacity: 0.9;
  background: linear-gradient(
    45deg,
    ${prop => prop.color},
    rgb(${prop => prop.degrad})
  );
  box-shadow: rgb(${prop => prop.degrad}) 0px 0px 150px;
  border: 2.4285714285714284px solid rgba(255, 255, 255, 0.4);
  color: #ffffff;

  ${props => (props.front ? `transform: translateZ(-20px);` : "")} ${props =>
      props.back
        ? `transform: translateZ(-100px) rotateY(180deg);`
        : ""} ${props =>
      props.right
        ? `transform: rotateY(-270deg) translateX(100px);
  transform-origin: top right;`
        : ""} ${props =>
      props.left
        ? `transform: rotateY(270deg) translateX(-100px);
    transform-origin: center left;`
        : ""} ${props =>
      props.top
        ? `transform: rotateX(-270deg) translateY(-100px);
         transform-origin: top center;`
        : ""} ${props =>
      props.bottom
        ? `transform: rotateX(270deg) translateY(100px);
   transform-origin: bottom center;`
        : ""};
`;

class Box extends React.Component {
  render() {
    return (
      <Wrap>
        <Cube anim={this.props.anim}>
          <Face front color={this.props.color} degrad={this.props.degrad} />
          <Face back color={this.props.color} degrad={this.props.degrad} />
          <Face top color={this.props.color} degrad={this.props.degrad} />
          <Face bottom color={this.props.color} degrad={this.props.degrad} />
          <Face left color={this.props.color} degrad={this.props.degrad} />
          <Face right color={this.props.color} degrad={this.props.degrad} />
        </Cube>
      </Wrap>
    );
  }
}

export default Box;
