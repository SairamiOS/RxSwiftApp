//
//  ViewController.swift
//  DemoRxSwift
//
//  Created by GEIDC on 11/19/16.
//  Copyright © 2016 GEIDC. All rights reserved.
//

import UIKit
import RxCocoa
import RxSwift

class ViewController: UIViewController {
    
    
    @IBOutlet weak var tableView: UITableView!
    
    
    
    let profileAr = Observable.just([Profile(name:"Kevin",userID:"profile001"),Profile(name:"Mike Willson",userID:"profile002"),Profile(name:"Kymboo",userID:"profile003"),Profile(name:"Ram",userID:"profile004")])
    let disposeBag = DisposeBag()
    
    

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        
        tableView.rx.setDelegate(self).addDisposableTo(disposeBag)
        
        profileAr.bindTo(tableView.rx.items(cellIdentifier: "Cell")) { row, Profile,cell in
            cell.textLabel?.text = Profile.name
            cell.detailTextLabel?.text = Profile.userID
            cell.imageView?.image = Profile.profileImg
        }.addDisposableTo(disposeBag)
        
        tableView.rx.modelSelected(Profile.self).subscribe(onNext:{
            print("you selected :\($0)")
            
            let storyBoard : UIStoryboard = UIStoryboard(name: "Main", bundle:nil)
            let obserview = storyBoard.instantiateViewController(withIdentifier: "Obserview") as! ObservableViewController
            self.navigationController?.pushViewController(obserview, animated: true)

            
        }).addDisposableTo(disposeBag)
        
    }

    func numberOfSectionsInTableView(tableView: UITableView) -> Int {
        return 2
    }

    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(true)
        navigationController?.setNavigationBarHidden(true, animated: true)

    }
   

}

extension ViewController: UITableViewDelegate {
   
    
    func tableView(_ tableView: UITableView, viewForHeaderInSection section: Int) -> UIView? {
        let label = UILabel()
        label.text = "Section \(section)"
        label.backgroundColor = UIColor.lightGray
        return label
    }

    
    func tableView(_ tableView: UITableView, heightForHeaderInSection section: Int) -> CGFloat {
        return 20
    }
    
    func tableView(_ tableView: UITableView, heightForRowAt indexPath: IndexPath) -> CGFloat {
        return 100
    }
   
}

