export default function textField() {
    const [text, setText] = useRef("");
    
    return (
        <input placeholder="text here!" id="textField" onChange={setText(val)}/>
    );
}
