import { AutoScalingGroup } from '@aws-cdk/aws-autoscaling';
declare const asg: AutoScalingGroup;
declare const vpc: ec2.Vpc;
const alb = new ApplicationLoadBalancer(this, 'ALB', {
	vpc: vpc,
	internetFacing: true
  });
  const listener = alb.addListener('Listener', {
    Protocol: 'TCP',
    Port: 80,
    SslPolicy: 'ELBSecurityPolicy-2015-05',
    Certificates: [{
      CertificateArn: 'arn:aws:iam::123456789012:server-certificate/my-cert',
      CertificateChain: '-----BEGIN CERTIFICATE-----\n...\n-----END CERTIFICATE-----',
      PrivateKey: '-----BEGIN PRIVATE KEY-----\n...\n-----END PRIVATE KEY-----',
    }]
    // SSLPolicy: 'ELBSecurityPolicy-2015-05'
  });