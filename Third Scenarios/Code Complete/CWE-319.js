import { AutoScalingGroup } from '@aws-cdk/aws-autoscaling';
declare const asg: AutoScalingGroup;
declare const vpc: ec2.Vpc;
const alb = new ApplicationLoadBalancer(this, 'ALB', {
	vpc: vpc,
	internetFacing: true
  });
  const listener = alb.addListener('Listener', {port: 80,
	open: true,
  });

  listener.addTargets('Target', {
    port: 8080,
    targets: [asg]
  });
