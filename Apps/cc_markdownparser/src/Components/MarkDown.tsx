import 
    React,
    { PropsWithChildren } 
from 'react'

import MarkdDownParser from '../Helper/MarkDownParser'

/*
    React Component to render mark down
*/
export default function MarkDown (props: PropsWithChildren): React.ReactElement 
{
    return <MarkdDownParser>{props.children} </MarkdDownParser>
}


