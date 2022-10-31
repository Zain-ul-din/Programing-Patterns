import Head from 'next/head'
import Image from 'next/image'
import styles from '../styles/Home.module.css'


import 
{ 
    Text,
    Flex,
    Center,
    Textarea 
} from '@chakra-ui/react'

export default function Home (): JSX.Element
{

    return (
        <>
          <Center>
            <Text my = {5} fontWeight = {'bold'} fontSize = {'2xl'}>Mark-Down Editor</Text>
          </Center>
          <Flex px = {'10%'}>
            <Textarea />
            <Flex backgroundColor={'orange.300'} width = {'70%'} position = {'relative'}>
                Hello
            </Flex>
          </Flex>
        </>
    )
}