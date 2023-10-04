resource "aws_instance" "ansible-874" {
  ami                         = "ami-0f5ee92e2d63afc18"
  associate_public_ip_address = false
  availability_zone           = "ap-south-1b"
  cpu_core_count              = 1
  cpu_threads_per_core        = 1
  credit_specification {
    cpu_credits = "standard"
  }
  disable_api_termination = false
  ebs_optimized           = false
  enclave_options {
    enabled = false
  }
  hibernation                          = false
  instance_initiated_shutdown_behavior = "stop"
  instance_type                        = "t2.micro"
  key_name                             = "${data.aws_key_pair.kubernet-9e5.key_name}"
  metadata_options {
    http_tokens = "REDACTED-BY-FIREFLY:ec91fdd9256cb75ae611249b50cb7eb16533f0fa91b86239ec1d439a1ea033b8:sha256"
  }
  monitoring = false
  private_ip = "172.31.1.185"
  root_block_device {
    encrypted   = true
    iops        = 100
    kms_key_id  = "${data.aws_kms_key.bc158db1-02c4-4a13-bd7f-2cb8e7aa0291-8a2.arn}"
    volume_size = 20
  }
  security_groups = ["${data.aws_security_group.launch-wizard-6-c2a.name}"]
  subnet_id       = "${data.aws_subnet.subnet-06083f69d252f2e92-617.id}"
  tags = {
    Name = "ansible"
  }
  tenancy                = "default"
  vpc_security_group_ids = ["${data.aws_security_group.launch-wizard-6-28d.id}"]
}


data "aws_security_group" "launch-wizard-6-c2a" {
  name = "launch-wizard-6"
}


data "aws_security_group" "launch-wizard-6-28d" {
  id = "sg-078e293ef862fb40b"
}


data "aws_key_pair" "kubernet-9e5" {
  key_name = "kubernet"
}


data "aws_subnet" "subnet-06083f69d252f2e92-617" {
  id = "subnet-06083f69d252f2e92"
}


data "aws_ebs_volume" "vol-0df6b93d20307d90d-ce3" {
  filter {
    name   = "volume-id"
    values = ["vol-0df6b93d20307d90d"]
  }
}


data "aws_kms_key" "bc158db1-02c4-4a13-bd7f-2cb8e7aa0291-8a2" {
  key_id = "bc158db1-02c4-4a13-bd7f-2cb8e7aa0291"
}

