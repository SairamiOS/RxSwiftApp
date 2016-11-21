//
//  ObservableViewController.swift
//  DemoRxSwift
//
//  Created by GEIDC on 11/21/16.
//  Copyright © 2016 GEIDC. All rights reserved.
//

import UIKit

class ObservableViewController: UIViewController {
    
    var circleView: UIView!

    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
        navigationController?.setNavigationBarHidden(false, animated: true)
        navigationController?.navigationBar.tintColor = UIColor.black
        
        setup()
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

    
    func setup() {
        // Add circle view
        circleView = UIView(frame: CGRect(origin: view.center, size: CGSize(width: 100.0, height: 100.0)))
        circleView.layer.cornerRadius = circleView.frame.width / 2.0
        circleView.center = view.center
        circleView.backgroundColor = UIColor.green
        view.addSubview(circleView)
        
        // Add gesture recognizer
        
        let gestureRecognizer = UIPanGestureRecognizer(target: self, action:#selector(ObservableViewController.circleMoved(recognizer:)))
         circleView.addGestureRecognizer(gestureRecognizer)
        
        
    }
    
    func circleMoved(recognizer: UIPanGestureRecognizer) {
        let location = recognizer.location(in: view)
        UIView.animate(withDuration: 0.1) {
            self.circleView.center = location
        }
    }
}
