import { initializeApp } from 'firebase/app'
import { getAuth } from 'firebase/auth'
import { getFirestore } from 'firebase/firestore'
import { firebaseConfig } from './config'

import type { FirebaseApp } from 'firebase/app'
import type { Auth } from 'firebase/auth'
import type { Firestore } from 'firebase/firestore'

interface IFirebaseInitialize
{
    firebaseApp: FirebaseApp,
    firebaseAuth: Auth,
    fireStore: Firestore
}

export function firebaseInitialize () : IFirebaseInitialize
{
    const firebaseApp:FirebaseApp = initializeApp (firebaseConfig)
    const firebaseAuth:Auth       = getAuth (firebaseApp) 
    const fireStore:Firestore     = getFirestore (firebaseApp)

    return {firebaseApp, firebaseAuth, fireStore}
}


