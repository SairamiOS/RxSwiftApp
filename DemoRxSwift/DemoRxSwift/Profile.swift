//
//  profile.swift
//  DemoRxSwift
//
//  Created by GEIDC on 11/20/16.
//  Copyright © 2016 GEIDC. All rights reserved.
//

import UIKit

struct Profile {
    
    let name : String
    let userID : String
    let profileImg : UIImage?
    
    init(name:String , userID:String) {
        
        self.name = name
        self.userID = userID
        profileImg = UIImage(named: userID)
    }

}

extension Profile: CustomStringConvertible{
   
    var description: String{
        
        return "\(name): discrioption/\(userID)"
    }
}
