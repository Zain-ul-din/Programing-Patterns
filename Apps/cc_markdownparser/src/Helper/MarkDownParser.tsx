
/*
    "dependencies": { "unified": "^10.1.2" }
*/

import React, { PropsWithChildren, ReactNode, useEffect } from "react";

///
/// Helper
///

import { unified } from 'unified'
import remarkParse from 'remark-parse'


/// Validates children types
async function validateChildernTypes (childs: string )
{   
    
}


export default function MarkdDownParser (props: PropsWithChildren) :React.ReactElement
{
    
    useEffect (()=> {
        validateChildernTypes ((props.children as string []) [0])
    }, [props.children]);

    return (
        <>
        {
            props.children
        }
        </>
    )
}


