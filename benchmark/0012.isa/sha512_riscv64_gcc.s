	.file	"sha512.cc"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_c2p0_zicsr2p0_zifencei2p0_zaamo1p0_zalrsc1p0_zca1p0_zcd1p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.align	1
	.globl	_Z14sha512_invokerPmPKSt4byteS2_
	.type	_Z14sha512_invokerPmPKSt4byteS2_, @function
_Z14sha512_invokerPmPKSt4byteS2_:
.LFB3187:
	.cfi_startproc
	addi	sp,sp,-448
	.cfi_def_cfa_offset 448
	sd	ra,440(sp)
	sd	a1,56(sp)
	.cfi_offset 1, -8
	beq	a1,a2,.L1
	sd	s0,432(sp)
	li	a5,1116352512
	.cfi_offset 8, -16
	li	s0,-1245642752
	sd	s10,352(sp)
	addi	s0,s0,-1072
	addi	a5,a5,-103
	li	a3,-685199360
	.cfi_offset 26, -96
	li	s10,-330481664
	sd	a0,328(sp)
	addi	a3,a3,-478
	slli	s0,s0,32
	slli	a5,a5,32
	addi	s10,s10,-1233
	li	t5,-1841332224
	li	t4,-712101888
	li	t3,-670584832
	add	a5,a5,a3
	sd	s1,424(sp)
	add	a3,s0,s10
	sd	s4,400(sp)
	ld	s0,328(sp)
	sd	s5,392(sp)
	sd	s6,384(sp)
	.cfi_offset 9, -24
	.cfi_offset 20, -48
	.cfi_offset 21, -56
	.cfi_offset 22, -64
	li	s1,1899446272
	li	t2,-186978304
	addi	t5,t5,677
	li	s6,-1357295616
	addi	t4,t4,-149
	li	s5,-630358016
	addi	t3,t3,-1383
	li	s4,-1560084480
	sd	s9,360(sp)
	addi	s1,s1,1169
	li	a4,602890240
	addi	t2,t2,-557
	.cfi_offset 25, -88
	li	s9,-2121670656
	li	t0,240496640
	slli	t5,t5,32
	addi	s6,s6,-101
	slli	t4,t4,33
	addi	s5,s5,280
	slli	t3,t3,32
	addi	s4,s4,578
	sd	s8,368(sp)
	slli	s1,s1,32
	slli	t2,t2,33
	add	t5,t5,s6
	add	t4,t4,s5
	add	t3,t3,s4
	addi	a4,a4,1485
	addi	s9,s9,-1092
	addi	t0,t0,151
	.cfi_offset 24, -80
	li	s8,-213340160
	li	t6,754487296
	li	t1,310599680
	li	a6,356720640
	add	a4,s1,a4
	sd	s3,408(sp)
	add	s1,t2,s9
	sd	s7,376(sp)
	slli	t0,t0,34
	sd	a5,192(sp)
	sd	t5,240(sp)
	sd	t4,248(sp)
	ld	t5,8(s0)
	ld	t4,16(s0)
	sd	t3,256(sp)
	addi	s8,s8,1336
	ld	t3,24(s0)
	addi	t6,t6,-1799
	.cfi_offset 19, -40
	.cfi_offset 23, -72
	li	s7,-1241133056
	addi	t1,t1,-1279
	li	s3,1164996608
	addi	a6,a6,-143
	li	a5,-704663552
	sd	s1,216(sp)
	slli	t6,t6,33
	add	s1,t0,s8
	addi	s7,s7,25
	slli	t1,t1,32
	addi	s3,s3,-66
	slli	a6,a6,34
	addi	a5,a5,1250
	sd	s1,224(sp)
	add	t1,t1,s3
	add	s1,t6,s7
	add	a5,a6,a5
	sd	s2,416(sp)
	sd	s11,344(sp)
	.cfi_offset 18, -32
	.cfi_offset 27, -104
	sd	a2,320(sp)
	sd	a4,200(sp)
	sd	a3,208(sp)
	sd	s1,232(sp)
	li	a7,303611904
	ld	s1,0(s0)
	sd	t5,72(sp)
	sd	t4,80(sp)
	sd	t3,88(sp)
	sd	t1,264(sp)
	ld	t1,32(s0)
	sd	a5,280(sp)
	mv	a5,s0
	ld	a5,56(a5)
	addi	a7,a7,735
	li	s2,1323610112
	li	a0,1925079040
	li	a1,-1066442752
	slli	a7,a7,33
	addi	s2,s2,652
	addi	a0,a0,-651
	addi	a1,a1,-1793
	li	a2,-1680080896
	li	a4,-226783232
	li	a3,991334400
	add	a7,a7,s2
	slli	a0,a0,32
	slli	a1,a1,33
	addi	a2,a2,1703
	li	s11,-1046745088
	addi	a4,a4,-1681
	addi	a3,a3,1713
	li	t2,633802752
	addi	t2,t2,565
	add	a4,a0,a4
	slli	a2,a2,32
	addi	s11,s11,373
	li	t0,-815194112
	sd	a7,272(sp)
	sd	a5,112(sp)
	ld	a7,40(s0)
	add	a5,a1,a3
	ld	s0,48(s0)
	addi	t0,t0,1684
	slli	s11,s11,32
	sd	a4,288(sp)
	sd	a5,296(sp)
	add	a4,a2,t2
	lui	a5,%hi(_ZN7ufio7details6sha51210k512scalarE+512)
	sd	a4,304(sp)
	addi	a5,a5,%lo(_ZN7ufio7details6sha51210k512scalarE+512)
	add	a4,s11,t0
	sd	a7,96(sp)
	sd	s0,104(sp)
	sd	a4,312(sp)
	sd	a5,64(sp)
	mv	t2,s1
	mv	t0,t1
.L4:
	ld	s11,56(sp)
	sd	t0,16(sp)
	sd	t2,8(sp)
	ld	a0,0(s11)
	call	__bswapdi2
	ld	t0,16(sp)
	ld	t2,8(sp)
	ld	s9,72(sp)
	slli	a2,t0,50
	slli	a3,t0,46
	srli	a4,t0,14
	srli	a5,t0,18
	add	a5,a5,a3
	add	a4,a4,a2
	srli	a3,t0,41
	xor	a4,a4,a5
	slli	a5,t0,23
	add	a3,a3,a5
	ld	a5,112(sp)
	ld	s8,80(sp)
	srli	s3,t2,28
	add	a7,a0,a5
	slli	a5,t2,36
	srli	a1,t2,34
	add	s3,s3,a5
	slli	a5,t2,30
	ld	s4,96(sp)
	ld	s6,104(sp)
	add	a1,a1,a5
	xor	s0,s9,t2
	srli	a2,t2,39
	xor	a5,s9,s8
	xor	a3,a4,a3
	xor	s3,s3,a1
	ld	a4,192(sp)
	slli	a1,t2,25
	add	a2,a2,a1
	and	a5,a5,s0
	xor	a6,s4,s6
	xor	s3,s3,a2
	xor	a5,a5,s9
	add	a7,a7,a4
	and	a6,a6,t0
	sd	a0,48(sp)
	add	s3,s3,a5
	ld	a0,8(s11)
	ld	a5,88(sp)
	xor	a4,a6,s6
	add	a3,a3,a7
	add	a3,a3,a4
	add	s5,a3,a5
	add	s3,s3,a3
	sd	t2,16(sp)
	sd	t0,8(sp)
	call	__bswapdi2
	ld	t0,8(sp)
	ld	t2,16(sp)
	ld	t3,200(sp)
	xor	a5,t0,s4
	slli	t1,s5,50
	slli	a1,s5,46
	slli	a7,s3,36
	slli	a2,s3,30
	mv	a6,a0
	sd	a0,40(sp)
	srli	a3,s5,14
	srli	a0,s5,18
	srli	s2,s3,28
	srli	a4,s3,34
	add	a0,a0,a1
	add	a4,a4,a2
	and	a5,a5,s5
	add	a6,a6,s6
	add	a3,a3,t1
	xor	s6,s3,t2
	slli	t1,s5,23
	srli	a1,s5,41
	add	s2,s2,a7
	srli	a2,s3,39
	slli	a7,s3,25
	add	a6,a6,t3
	add	a1,a1,t1
	add	a2,a2,a7
	xor	a5,a5,s4
	xor	a3,a3,a0
	xor	s2,s2,a4
	ld	a0,16(s11)
	and	a4,s0,s6
	xor	a4,a4,t2
	xor	a3,a3,a1
	add	a5,a5,a6
	xor	s2,s2,a2
	add	a5,a5,a3
	add	s2,s2,a4
	add	s1,a5,s8
	add	s2,s2,a5
	sd	t2,32(sp)
	call	__bswapdi2
	ld	t0,8(sp)
	ld	s0,208(sp)
	slli	t1,s1,50
	xor	a2,s5,t0
	slli	a7,s2,36
	slli	a1,s2,30
	mv	a4,a0
	sd	a0,16(sp)
	srli	a3,s1,14
	slli	a0,s1,46
	srli	t3,s1,18
	srli	a6,s2,28
	srli	a5,s2,34
	add	t3,t3,a0
	add	a6,a6,a7
	add	a5,a5,a1
	srli	a7,s2,39
	srli	a0,s1,41
	and	a2,a2,s1
	add	a4,a4,s4
	add	a3,a3,t1
	xor	s4,s3,s2
	slli	t1,s1,23
	slli	a1,s2,25
	xor	a2,a2,t0
	add	t1,a0,t1
	add	a1,a7,a1
	ld	a0,24(s11)
	xor	a3,a3,t3
	add	a4,a4,s0
	and	s6,s6,s4
	xor	s0,a6,a5
	xor	a3,a3,t1
	add	a4,a2,a4
	xor	s0,s0,a1
	xor	s6,s6,s3
	add	a4,a4,a3
	add	s0,s0,s6
	add	s7,a4,s9
	add	s0,s0,a4
	call	__bswapdi2
	ld	t0,8(sp)
	ld	t4,216(sp)
	xor	a5,s5,s1
	slli	t1,s7,50
	slli	a3,s7,46
	slli	a7,s0,36
	slli	a4,s0,30
	mv	a6,a0
	sd	a0,24(sp)
	srli	a1,s7,14
	srli	t3,s7,18
	srli	a2,s0,28
	srli	a0,s0,34
	add	a6,a6,t0
	add	t3,t3,a3
	xor	s9,s2,s0
	add	a0,a0,a4
	and	a5,a5,s7
	add	a1,a1,t1
	srli	a3,s7,41
	slli	t1,s7,23
	add	a2,a2,a7
	slli	a4,s0,25
	srli	a7,s0,39
	ld	t2,32(sp)
	add	a6,a6,t4
	xor	a1,a1,t3
	xor	a2,a2,a0
	add	a3,a3,t1
	ld	a0,32(s11)
	add	a4,a7,a4
	xor	a5,a5,s5
	and	s4,s4,s9
	xor	a3,a1,a3
	xor	a4,a2,a4
	add	a5,a5,a6
	xor	s4,s4,s2
	add	a5,a5,a3
	add	t4,a4,s4
	add	s6,t4,a5
	add	s4,a5,t2
	sd	t0,184(sp)
	sd	t2,176(sp)
	call	__bswapdi2
	ld	t4,224(sp)
	xor	a5,s1,s7
	slli	t3,s4,50
	slli	a1,s4,46
	slli	t1,s6,36
	slli	a4,s6,30
	mv	a6,a0
	sd	a0,8(sp)
	srli	a3,s4,14
	srli	a7,s4,18
	srli	a2,s6,28
	srli	a0,s6,34
	add	a7,a7,a1
	xor	s8,s0,s6
	add	a6,a6,t4
	add	a0,a0,a4
	and	a5,a5,s4
	add	a3,a3,t3
	srli	a1,s4,41
	slli	t3,s4,23
	add	a2,a2,t1
	slli	a4,s6,25
	srli	t1,s6,39
	add	a6,a6,s5
	add	a1,a1,t3
	xor	a2,a2,a0
	xor	a3,a3,a7
	ld	a0,40(s11)
	add	a4,t1,a4
	xor	a5,a5,s1
	and	s9,s9,s8
	xor	a3,a3,a1
	add	a5,a5,a6
	xor	a4,a2,a4
	xor	s9,s9,s0
	add	a5,a5,a3
	add	a4,a4,s9
	add	s3,s3,a5
	add	s5,a4,a5
	call	__bswapdi2
	sd	a0,32(sp)
	ld	t4,232(sp)
	xor	a5,s7,s4
	slli	t3,s3,50
	slli	a1,s3,46
	slli	t1,s5,36
	slli	a4,s5,30
	mv	a6,a0
	srli	a3,s3,14
	srli	a7,s3,18
	srli	a2,s5,28
	srli	a0,s5,34
	add	a6,a6,t4
	add	a7,a7,a1
	xor	s9,s6,s5
	add	a0,a0,a4
	and	a5,a5,s3
	add	a3,a3,t3
	srli	a1,s3,41
	slli	t3,s3,23
	add	a2,a2,t1
	slli	a4,s5,25
	srli	t1,s5,39
	add	a6,a6,s1
	add	a1,a1,t3
	xor	a2,a2,a0
	xor	a3,a3,a7
	ld	a0,48(s11)
	add	a4,t1,a4
	xor	a5,a5,s7
	and	s8,s8,s9
	xor	a3,a3,a1
	add	a5,a5,a6
	xor	a4,a2,a4
	xor	s8,s8,s6
	add	a5,a5,a3
	add	a4,a4,s8
	add	s2,s2,a5
	add	s1,a4,a5
	call	__bswapdi2
	ld	a6,240(sp)
	xor	a5,s4,s3
	slli	t3,s2,50
	slli	a1,s2,46
	slli	t1,s1,36
	slli	a4,s1,30
	mv	s10,a0
	srli	a3,s2,14
	srli	a7,s2,18
	srli	a2,s1,28
	srli	a0,s1,34
	add	a7,a7,a1
	xor	s8,s5,s1
	add	a0,a0,a4
	and	a5,a5,s2
	add	a3,a3,t3
	srli	a1,s2,41
	slli	t3,s2,23
	add	a2,a2,t1
	slli	a4,s1,25
	srli	t1,s1,39
	add	a6,s10,a6
	add	a6,a6,s7
	add	a1,a1,t3
	xor	a2,a2,a0
	xor	a3,a3,a7
	ld	a0,56(s11)
	add	a4,t1,a4
	xor	a5,a5,s4
	and	s9,s9,s8
	xor	a3,a3,a1
	add	a5,a5,a6
	xor	a4,a2,a4
	xor	s9,s9,s5
	add	a5,a5,a3
	add	a4,a4,s9
	add	s0,s0,a5
	add	s11,a4,a5
	call	__bswapdi2
	slli	t1,s11,36
	slli	a4,s11,30
	ld	a6,248(sp)
	mv	s9,a0
	srli	a2,s11,28
	srli	a0,s11,34
	add	a0,a0,a4
	add	a2,a2,t1
	xor	a2,a2,a0
	xor	a5,s3,s2
	slli	t3,s0,50
	slli	a1,s0,46
	ld	a0,56(sp)
	srli	a3,s0,14
	srli	a7,s0,18
	add	a7,a7,a1
	and	a5,a5,s0
	add	a3,a3,t3
	srli	a1,s0,41
	slli	t3,s0,23
	add	a6,s9,a6
	srli	t1,s11,39
	xor	s7,s1,s11
	add	a6,a6,s4
	add	a1,a1,t3
	xor	a3,a3,a7
	slli	a4,s11,25
	xor	a5,a5,s3
	xor	a3,a3,a1
	add	a4,t1,a4
	add	a5,a5,a6
	ld	a0,64(a0)
	and	s8,s8,s7
	add	a5,a5,a3
	xor	a4,a2,a4
	xor	s8,s8,s1
	add	t4,s6,a5
	add	a4,a4,s8
	add	s4,a4,a5
	sd	t4,120(sp)
	call	__bswapdi2
	ld	t4,120(sp)
	slli	t1,s4,36
	slli	a4,s4,30
	ld	a6,256(sp)
	mv	s8,a0
	srli	a2,s4,28
	srli	a0,s4,34
	add	a0,a0,a4
	add	a2,a2,t1
	slli	t3,t4,50
	slli	a1,t4,46
	xor	a5,s2,s0
	srli	a3,t4,14
	srli	a7,t4,18
	xor	a2,a2,a0
	ld	a0,56(sp)
	add	a7,a7,a1
	and	a5,a5,t4
	srli	a1,t4,41
	add	a3,a3,t3
	add	a6,s8,a6
	slli	t3,t4,23
	srli	t1,s4,39
	xor	s6,s11,s4
	add	a6,a6,s3
	add	a1,a1,t3
	xor	a3,a3,a7
	slli	a4,s4,25
	xor	a5,a5,s2
	xor	a3,a3,a1
	add	a4,t1,a4
	add	a5,a5,a6
	ld	a0,72(a0)
	and	s7,s7,s6
	add	a5,a5,a3
	xor	s7,s7,s11
	xor	a4,a2,a4
	add	a4,a4,s7
	add	a2,s5,a5
	add	s3,a4,a5
	sd	t4,128(sp)
	sd	a2,120(sp)
	call	__bswapdi2
	ld	a2,120(sp)
	ld	t4,128(sp)
	mv	s7,a0
	slli	t5,a2,50
	slli	a0,a2,46
	srli	a3,a2,14
	srli	t1,a2,18
	add	t1,t1,a0
	ld	a6,264(sp)
	srli	a0,a2,41
	add	a3,a3,t5
	slli	t5,a2,23
	xor	a3,a3,t1
	add	t1,a0,t5
	ld	a0,56(sp)
	xor	a5,s0,t4
	slli	t3,s3,36
	slli	a4,s3,30
	srli	a1,s3,28
	srli	a7,s3,34
	add	a7,a7,a4
	xor	s5,s4,s3
	and	a5,a5,a2
	add	a1,a1,t3
	slli	a4,s3,25
	srli	t3,s3,39
	add	a6,s7,a6
	add	a6,a6,s2
	xor	a1,a1,a7
	add	a4,t3,a4
	ld	a0,80(a0)
	xor	a5,a5,s0
	and	s6,s6,s5
	xor	a3,a3,t1
	add	a5,a5,a6
	xor	a4,a1,a4
	xor	s6,s6,s4
	add	a5,a5,a3
	add	a4,a4,s6
	add	s1,s1,a5
	add	s2,a4,a5
	call	__bswapdi2
	ld	a2,120(sp)
	ld	t4,128(sp)
	slli	a4,s1,50
	srli	a3,s1,14
	slli	a6,s2,36
	mv	s6,a0
	srli	t1,s2,34
	srli	a0,s2,28
	add	a3,a3,a4
	slli	a4,s2,30
	xor	a5,t4,a2
	add	a0,a0,a6
	sd	a2,136(sp)
	add	t1,t1,a4
	ld	a2,272(sp)
	xor	t1,a0,t1
	slli	t3,s1,46
	ld	a0,56(sp)
	srli	a1,s1,18
	add	a1,a1,t3
	slli	t5,s1,23
	srli	t3,s2,39
	add	a7,s6,a2
	and	a5,a5,s1
	srli	a6,s1,41
	slli	a4,s2,25
	xor	a3,a3,a1
	xor	a1,s3,s2
	add	a6,a6,t5
	add	a7,a7,s0
	xor	a5,a5,t4
	add	a4,t3,a4
	and	s5,s5,a1
	ld	a0,88(a0)
	xor	a3,a3,a6
	add	a5,a5,a7
	xor	a4,t1,a4
	xor	s5,s5,s3
	add	a5,a5,a3
	add	a4,a4,s5
	add	s11,s11,a5
	add	s0,a4,a5
	sd	a1,120(sp)
	call	__bswapdi2
	ld	a1,280(sp)
	slli	t3,s11,50
	slli	a6,s11,46
	srli	a3,s11,14
	srli	a4,s11,18
	ld	a2,136(sp)
	slli	a7,s0,36
	add	a4,a4,a6
	mv	s5,a0
	slli	a6,s0,30
	srli	a0,s0,28
	add	a3,a3,t3
	srli	t3,s0,34
	ld	t4,128(sp)
	add	a0,a0,a7
	add	t3,t3,a6
	slli	a7,s11,23
	srli	a6,s11,41
	add	a6,a6,a7
	add	t1,s5,a1
	xor	a7,s2,s0
	ld	a1,120(sp)
	xor	a5,a2,s1
	xor	t3,a0,t3
	sd	a7,144(sp)
	ld	a0,56(sp)
	add	t1,t1,t4
	and	a5,a5,s11
	srli	t4,s0,39
	xor	a3,a3,a4
	slli	a4,s0,25
	xor	a5,a5,a2
	add	a4,t4,a4
	and	a1,a1,a7
	xor	a3,a3,a6
	xor	a1,a1,s2
	add	a5,a5,t1
	xor	a4,t3,a4
	ld	a0,96(a0)
	add	a5,a5,a3
	add	a4,a4,a1
	add	a3,s4,a5
	add	a4,a4,a5
	sd	a3,128(sp)
	sd	a4,120(sp)
	call	__bswapdi2
	ld	a2,288(sp)
	ld	a3,128(sp)
	mv	s4,a0
	add	t5,s4,a2
	ld	a2,136(sp)
	ld	a4,120(sp)
	slli	t1,a3,50
	slli	a6,a3,46
	srli	a1,a3,14
	srli	a0,a3,18
	add	t5,t5,a2
	add	a0,a0,a6
	slli	a2,a3,23
	srli	t4,a3,41
	add	a1,a1,t1
	add	t4,t4,a2
	slli	t1,a4,36
	ld	a7,144(sp)
	srli	t3,a4,28
	slli	a2,a4,25
	xor	a1,a1,a0
	srli	a0,a4,39
	xor	a5,s1,s11
	srli	a6,a4,34
	add	t3,t3,t1
	add	a2,a0,a2
	slli	t1,a4,30
	ld	a0,56(sp)
	and	a5,a5,a3
	add	a6,a6,t1
	xor	t1,s0,a4
	xor	t3,t3,a6
	and	a7,a7,t1
	xor	a5,a5,s1
	xor	a1,a1,t4
	xor	a7,a7,s0
	add	a5,a5,t5
	xor	a2,t3,a2
	ld	a0,104(a0)
	add	a5,a5,a1
	add	a2,a2,a7
	add	a1,s3,a5
	add	a6,a2,a5
	sd	a3,136(sp)
	sd	a4,160(sp)
	sd	t1,152(sp)
	sd	a1,128(sp)
	sd	a6,120(sp)
	call	__bswapdi2
	ld	a1,128(sp)
	ld	a3,136(sp)
	ld	a6,120(sp)
	ld	a4,296(sp)
	xor	a5,s11,a3
	slli	t3,a1,50
	slli	a2,a1,46
	srli	a7,a1,14
	srli	t5,a1,18
	and	a5,a5,a1
	add	t5,t5,a2
	add	a7,a7,t3
	slli	a2,a6,36
	srli	t3,a6,28
	mv	s3,a0
	add	a0,a0,a4
	slli	t4,a6,30
	ld	a4,160(sp)
	add	a0,a0,s1
	add	t3,t3,a2
	xor	a5,a5,s11
	srli	a2,a6,34
	ld	t1,152(sp)
	add	a2,a2,t4
	add	a5,a5,a0
	ld	a0,56(sp)
	srli	t4,a1,41
	srli	s1,a6,39
	xor	t3,t3,a2
	xor	a7,a7,t5
	slli	a2,a6,25
	slli	t5,a1,23
	add	t4,t4,t5
	add	s1,s1,a2
	xor	a2,a4,a6
	xor	a7,a7,t4
	and	t1,t1,a2
	ld	a0,112(a0)
	add	a5,a5,a7
	xor	t1,t1,a4
	xor	s1,t3,s1
	add	s1,s1,t1
	add	t3,s2,a5
	add	s1,s1,a5
	sd	a3,144(sp)
	sd	a1,136(sp)
	sd	a6,168(sp)
	sd	a2,128(sp)
	sd	t3,120(sp)
	call	__bswapdi2
	ld	t3,120(sp)
	mv	s2,a0
	ld	a1,136(sp)
	slli	a7,t3,50
	srli	a0,t3,14
	srli	t4,t3,18
	add	a0,a0,a7
	slli	a7,t3,46
	ld	a3,144(sp)
	add	t4,t4,a7
	slli	t5,s1,36
	srli	a7,s1,28
	ld	a4,304(sp)
	slli	t6,s1,30
	add	a7,a7,t5
	srli	t5,s1,34
	add	t5,t5,t6
	xor	a5,a3,a1
	xor	a7,a7,t5
	xor	a0,a0,t4
	slli	t5,t3,23
	srli	t4,t3,41
	ld	a6,168(sp)
	add	t1,s2,a4
	and	a5,a5,t3
	add	t4,t4,t5
	xor	t4,a0,t4
	ld	a2,128(sp)
	add	t1,t1,s11
	xor	a5,a5,a3
	ld	a0,56(sp)
	add	a5,a5,t1
	srli	s11,s1,39
	slli	t1,s1,25
	add	s11,s11,t1
	xor	t1,a6,s1
	and	a2,a2,t1
	ld	a0,120(a0)
	xor	a2,a2,a6
	xor	s11,a7,s11
	add	a5,a5,t4
	add	s11,s11,a2
	add	s0,s0,a5
	add	s11,s11,a5
	sd	a1,152(sp)
	sd	t3,136(sp)
	sd	t1,128(sp)
	sd	a6,120(sp)
	call	__bswapdi2
	ld	a1,152(sp)
	ld	a4,312(sp)
	ld	t3,136(sp)
	ld	a3,144(sp)
	mv	a7,a0
	add	t4,a7,a4
	slli	a2,s0,50
	xor	a5,a1,t3
	srli	a0,s0,14
	add	a3,t4,a3
	add	a0,a0,a2
	slli	t4,s0,46
	and	a5,a5,s0
	srli	a2,s0,18
	add	a2,a2,t4
	xor	a5,a5,a1
	xor	a0,a0,a2
	srli	t5,s0,41
	slli	a2,s11,36
	add	a5,a5,a3
	srli	t4,s11,28
	slli	a3,s0,23
	add	t4,t4,a2
	ld	t1,128(sp)
	add	a3,t5,a3
	srli	a2,s11,34
	slli	t5,s11,30
	add	a2,a2,t5
	xor	a3,a0,a3
	xor	a2,t4,a2
	slli	a0,s11,25
	srli	t4,s11,39
	xor	t6,s1,s11
	ld	a4,160(sp)
	add	a0,t4,a0
	and	t1,t1,t6
	ld	t2,176(sp)
	ld	t0,184(sp)
	xor	a0,a2,a0
	xor	t1,t1,s1
	add	a5,a5,a3
	add	a0,a0,t1
	add	a3,a0,a5
	add	a4,a4,a5
	lui	a5,%hi(_ZN7ufio7details6sha51210k512scalarE)
	ld	a6,120(sp)
	addi	a0,a5,%lo(_ZN7ufio7details6sha51210k512scalarE)
	sd	t2,120(sp)
	sd	t0,128(sp)
.L3:
	ld	t0,40(sp)
	srli	a2,s2,19
	addi	a0,a0,128
	slli	t4,t0,63
	srli	a5,t0,1
	slli	t1,t0,56
	srli	t5,t0,8
	add	a5,a5,t4
	slli	t4,s2,45
	add	t5,t5,t1
	add	a2,a2,t4
	srli	t1,s2,61
	slli	t4,s2,3
	add	t1,t1,t4
	xor	a5,a5,t5
	srli	t5,t0,7
	srli	t4,a4,14
	xor	a2,a2,t1
	xor	a5,a5,t5
	slli	t1,a4,50
	srli	t5,s2,6
	xor	a2,a2,t5
	add	t4,t4,t1
	slli	t5,a4,46
	srli	t1,a4,18
	add	t1,t1,t5
	xor	t4,t4,t1
	srli	t0,a4,41
	slli	t1,a4,23
	add	t0,t0,t1
	xor	t1,s0,t3
	and	t1,t1,a4
	xor	t1,t1,t3
	xor	t0,t4,t0
	add	a5,a5,a2
	add	t0,t0,t1
	ld	a2,-128(a0)
	ld	t1,48(sp)
	add	a5,a5,s7
	ld	t4,16(sp)
	add	t2,t1,a5
	add	t0,t0,a2
	sd	t2,48(sp)
	add	t0,t0,t2
	ld	t2,16(sp)
	slli	a5,a3,36
	srli	a2,a3,28
	add	t0,t0,a1
	add	a2,a2,a5
	slli	t5,t4,63
	slli	a1,a3,30
	srli	t1,a3,34
	srli	a5,t4,1
	add	a5,a5,t5
	add	t1,t1,a1
	slli	t5,t2,56
	srli	t4,t4,8
	add	t4,t4,t5
	slli	a1,a3,25
	xor	t1,a2,t1
	srli	a2,a3,39
	add	a2,a2,a1
	xor	a5,a5,t4
	srli	a1,t2,7
	ld	t4,40(sp)
	srli	t5,a7,19
	xor	t1,t1,a2
	xor	a5,a5,a1
	slli	a1,a7,45
	add	a6,t0,a6
	xor	a2,a3,s11
	add	t5,t5,a1
	add	t1,t1,t0
	srli	a1,a7,61
	slli	t0,a7,3
	and	t6,a2,t6
	add	a1,a1,t0
	xor	t6,t6,s11
	add	t4,t4,s6
	xor	a1,t5,a1
	srli	t5,a7,6
	add	t1,t1,t6
	add	a5,a5,t4
	xor	t4,a1,t5
	add	t4,a5,t4
	srli	a1,t1,28
	slli	a5,t1,36
	sd	t4,40(sp)
	add	a1,a1,a5
	srli	t4,t1,34
	slli	a5,t1,30
	add	t4,t4,a5
	ld	t0,-120(a0)
	srli	a5,a6,14
	xor	a1,a1,t4
	slli	t4,a6,50
	add	a5,a5,t4
	ld	t4,40(sp)
	add	t3,t3,t0
	ld	t5,24(sp)
	add	t4,t3,t4
	ld	t3,24(sp)
	slli	t2,t5,63
	srli	t6,t5,1
	slli	t3,t3,56
	srli	t5,t5,8
	add	t5,t5,t3
	srli	t0,a6,18
	slli	t3,a6,46
	add	t0,t0,t3
	xor	t3,a4,s0
	and	t3,t3,a6
	add	t6,t6,t2
	xor	t3,t3,s0
	xor	t6,t6,t5
	add	t3,t3,t4
	slli	t5,t1,25
	srli	t4,t1,39
	add	t4,t4,t5
	xor	t5,t1,a3
	and	a2,a2,t5
	xor	a1,a1,t4
	xor	t4,a2,a3
	xor	a5,a5,t0
	add	a1,a1,t4
	slli	t0,a6,23
	srli	t4,a6,41
	add	t4,t4,t0
	xor	a5,a5,t4
	add	t3,t3,a5
	ld	t2,48(sp)
	ld	a5,48(sp)
	ld	a2,24(sp)
	srli	t2,t2,19
	slli	t0,a5,45
	add	t0,t2,t0
	srli	a2,a2,7
	mv	t2,a5
	xor	a2,t6,a2
	srli	a5,a5,61
	slli	t6,t2,3
	ld	t4,16(sp)
	add	a5,a5,t6
	ld	t6,48(sp)
	add	a1,a1,t3
	ld	t2,-112(a0)
	add	t3,t3,s1
	ld	s1,8(sp)
	add	t4,t4,s5
	xor	a5,t0,a5
	srli	t6,t6,6
	add	t4,a2,t4
	xor	a5,a5,t6
	add	s0,s0,t2
	slli	t6,s1,63
	srli	t2,s1,1
	add	t0,t4,a5
	srli	a2,a1,28
	slli	a5,a1,36
	add	t2,t2,t6
	ld	t6,8(sp)
	slli	t4,a1,30
	add	a2,a2,a5
	srli	a5,a1,34
	add	a5,a5,t4
	xor	a2,a2,a5
	srli	t4,t3,14
	slli	a5,t3,50
	slli	t6,t6,56
	srli	s1,s1,8
	add	s1,s1,t6
	add	t4,t4,a5
	slli	t6,t3,46
	srli	a5,t3,18
	add	a5,a5,t6
	xor	t4,t4,a5
	xor	a5,a6,a4
	and	a5,a5,t3
	add	s0,s0,t0
	xor	a5,a5,a4
	add	a5,a5,s0
	srli	t6,a1,39
	slli	s0,a1,25
	add	t6,t6,s0
	xor	a2,a2,t6
	xor	t6,t1,a1
	and	t5,t5,t6
	xor	s0,t5,t1
	xor	t2,t2,s1
	ld	t5,8(sp)
	slli	s1,t3,23
	add	a2,a2,s0
	srli	s0,t3,41
	sd	t0,16(sp)
	add	s0,s0,s1
	ld	t0,40(sp)
	ld	s1,40(sp)
	xor	t4,t4,s0
	srli	t5,t5,7
	add	a5,a5,t4
	srli	t0,t0,19
	slli	s0,s1,45
	srli	t4,s1,61
	xor	t5,t2,t5
	slli	t2,s1,3
	add	s0,t0,s0
	add	t4,t4,t2
	ld	t0,24(sp)
	xor	t4,s0,t4
	ld	s0,40(sp)
	add	t0,t0,s4
	add	a2,a2,a5
	srli	t2,s0,6
	xor	t4,t4,t2
	add	t5,t5,t0
	add	s11,a5,s11
	ld	s0,32(sp)
	ld	s1,-104(a0)
	add	t5,t5,t4
	srli	a5,a2,28
	slli	t4,a2,36
	sd	t5,24(sp)
	add	a5,a5,t4
	srli	t5,a2,34
	slli	t4,a2,30
	add	t5,t5,t4
	add	a4,a4,s1
	srli	t4,s11,14
	slli	s1,s0,63
	srli	t2,s0,1
	xor	a5,a5,t5
	slli	t5,s11,50
	add	t4,t4,t5
	add	t2,t2,s1
	ld	t5,24(sp)
	ld	s1,32(sp)
	srli	s0,s0,8
	add	t5,a4,t5
	slli	a4,s1,56
	add	s0,s0,a4
	srli	t0,s11,18
	slli	a4,s11,46
	add	t0,t0,a4
	xor	a4,a6,t3
	and	a4,a4,s11
	xor	a4,a4,a6
	xor	t2,t2,s0
	add	a4,a4,t5
	slli	s0,a2,25
	srli	t5,a2,39
	add	t5,t5,s0
	xor	a5,a5,t5
	xor	t5,a1,a2
	and	t6,t6,t5
	xor	s0,t6,a1
	add	a5,a5,s0
	srli	t6,s1,7
	srli	s0,s11,41
	slli	s1,s11,23
	add	s0,s0,s1
	xor	t4,t4,t0
	ld	t0,16(sp)
	ld	s1,16(sp)
	xor	t4,t4,s0
	add	a4,a4,t4
	srli	t0,t0,19
	slli	s0,s1,45
	srli	t4,s1,61
	xor	t6,t2,t6
	slli	t2,s1,3
	add	s0,t0,s0
	add	t4,t4,t2
	ld	t0,8(sp)
	xor	t4,s0,t4
	ld	s0,16(sp)
	add	t0,t0,s3
	ld	s1,-96(a0)
	srli	t2,s0,6
	xor	t4,t4,t2
	add	t6,t6,t0
	add	t0,t6,t4
	sd	t0,8(sp)
	add	t4,a6,s1
	ld	s1,8(sp)
	add	a5,a5,a4
	add	a3,a4,a3
	xor	a4,t3,s11
	and	a6,a4,a3
	add	t4,t4,s1
	xor	a6,a6,t3
	slli	a4,a3,50
	add	a6,a6,t4
	srli	t6,a3,14
	slli	t4,a3,46
	srli	t2,a3,18
	add	t2,t2,t4
	add	t6,t6,a4
	slli	s0,s10,63
	xor	t6,t6,t2
	slli	t4,a5,36
	srli	t0,s10,1
	srli	t2,a5,28
	add	t2,t2,t4
	slli	s1,a5,30
	srli	a4,s10,8
	add	t0,t0,s0
	srli	t4,a5,34
	slli	s0,s10,56
	add	a4,a4,s0
	add	t4,t4,s1
	xor	t4,t2,t4
	xor	t0,t0,a4
	srli	t2,a3,41
	slli	a4,a3,23
	add	t2,t2,a4
	xor	t2,t6,t2
	add	t2,a6,t2
	srli	a4,a5,39
	slli	a6,a5,25
	xor	t6,a2,a5
	ld	s0,24(sp)
	add	a4,a4,a6
	ld	a6,24(sp)
	and	t5,t5,t6
	xor	t5,t5,a2
	xor	a4,t4,a4
	srli	s0,s0,19
	add	a4,a4,t5
	slli	t5,a6,45
	srli	s1,s10,7
	add	t5,s0,t5
	mv	s0,a6
	xor	s1,t0,s1
	srli	a6,a6,61
	slli	t0,s0,3
	ld	t4,32(sp)
	add	a6,a6,t0
	xor	t5,t5,a6
	srli	t0,s0,6
	xor	t5,t5,t0
	ld	t0,-88(a0)
	add	t4,s2,t4
	add	a6,t1,t2
	add	s1,s1,t4
	xor	t4,s11,a3
	add	s1,s1,t5
	slli	t1,s9,63
	srli	s0,s9,1
	add	t3,t3,t0
	and	t4,t4,a6
	add	t3,t3,s1
	srli	t5,s9,8
	add	s0,s0,t1
	xor	t4,t4,s11
	slli	t1,s9,56
	add	a4,a4,t2
	add	t5,t5,t1
	add	t4,t4,t3
	slli	t1,a6,50
	slli	t3,a6,46
	srli	t2,a6,14
	srli	t0,a6,18
	add	t0,t0,t3
	add	t2,t2,t1
	xor	t2,t2,t0
	slli	t3,a4,36
	srli	t0,a4,28
	sd	s1,32(sp)
	add	t0,t0,t3
	slli	s1,a4,30
	srli	t3,a4,34
	add	t3,t3,s1
	ld	t1,8(sp)
	ld	s1,8(sp)
	xor	s0,s0,t5
	srli	t5,s9,7
	srli	t1,t1,19
	xor	t5,s0,t5
	slli	s0,s1,45
	xor	t0,t0,t3
	add	s0,t1,s0
	srli	t3,a6,41
	srli	t1,s1,61
	slli	s1,a6,23
	add	t3,t3,s1
	xor	t3,t2,t3
	add	t3,t4,t3
	srli	t2,a4,39
	slli	t4,a4,25
	add	t2,t2,t4
	xor	t2,t0,t2
	xor	t4,a5,a4
	ld	t0,8(sp)
	and	t6,t6,t4
	xor	t6,t6,a5
	add	t2,t2,t6
	slli	t6,t0,3
	add	t1,t1,t6
	xor	t1,s0,t1
	srli	t6,t0,6
	add	t0,a1,t3
	add	s10,a7,s10
	xor	t6,t1,t6
	slli	a1,t0,50
	add	t1,t2,t3
	srli	t2,t0,14
	add	t5,t5,s10
	srli	t3,t0,18
	add	t2,t2,a1
	slli	a1,t0,46
	add	s10,t5,t6
	ld	s0,-80(a0)
	add	t3,t3,a1
	srli	t6,t1,28
	slli	a1,t1,36
	xor	t2,t2,t3
	add	t6,t6,a1
	slli	t3,t1,30
	srli	a1,t1,34
	add	a1,a1,t3
	add	s11,s11,s10
	add	s11,s11,s0
	xor	t6,t6,a1
	srli	s0,s8,1
	slli	a1,s8,63
	xor	t5,a3,a6
	srli	s1,t0,41
	add	s0,s0,a1
	slli	a1,t0,23
	and	t5,t5,t0
	srli	t3,s8,8
	add	a1,s1,a1
	slli	s1,s8,56
	add	t3,t3,s1
	xor	t5,t5,a3
	add	t5,t5,s11
	xor	s0,s0,t3
	ld	s11,32(sp)
	srli	t3,t1,39
	xor	a1,t2,a1
	slli	t2,t1,25
	add	t2,t3,t2
	xor	t3,a4,t1
	and	t4,t4,t3
	add	a1,t5,a1
	xor	t2,t6,t2
	xor	t4,t4,a4
	srli	t6,s11,19
	slli	t5,s11,45
	add	t5,t6,t5
	add	t4,t2,t4
	srli	t6,s11,61
	slli	t2,s11,3
	add	a2,a2,a1
	add	t4,t4,a1
	add	t6,t6,t2
	ld	a1,48(sp)
	srli	t2,s8,7
	xor	t2,s0,t2
	ld	s1,-72(a0)
	xor	t5,t5,t6
	add	t2,t2,s9
	srli	t6,s11,6
	xor	t6,t5,t6
	add	t2,t2,a1
	add	s9,t2,t6
	slli	t6,a2,50
	srli	t2,a2,14
	add	a1,s9,s1
	srli	s0,a2,18
	add	t2,t2,t6
	slli	t6,a2,46
	xor	t5,a6,t0
	add	s0,s0,t6
	add	a3,a1,a3
	srli	t6,t4,28
	slli	a1,t4,36
	xor	t2,t2,s0
	and	t5,t5,a2
	slli	s0,t4,30
	add	t6,t6,a1
	srli	a1,t4,34
	add	a1,a1,s0
	xor	t5,t5,a6
	srli	s1,a2,41
	xor	t6,t6,a1
	add	t5,t5,a3
	slli	a1,s7,63
	srli	s0,s7,1
	slli	a3,a2,23
	add	s0,s0,a1
	add	a3,s1,a3
	srli	a1,s7,8
	slli	s1,s7,56
	add	a1,a1,s1
	xor	s0,s0,a1
	xor	a3,t2,a3
	srli	a1,t4,39
	slli	t2,t4,25
	add	t2,a1,t2
	xor	a1,t1,t4
	and	t3,t3,a1
	add	a3,t5,a3
	xor	t2,t6,t2
	xor	t3,t3,t1
	srli	t6,s10,19
	slli	t5,s10,45
	add	t3,t2,t3
	add	t5,t6,t5
	slli	t2,s10,3
	srli	t6,s10,61
	ld	s1,40(sp)
	add	t6,t6,t2
	srli	t2,s7,7
	xor	s0,s0,t2
	xor	t5,t5,t6
	add	s0,s0,s8
	srli	t2,s10,6
	add	t6,a5,a3
	ld	s11,-64(a0)
	xor	t2,t5,t2
	add	s0,s0,s1
	add	a5,t3,a3
	add	s8,s0,t2
	slli	t3,t6,50
	srli	t2,t6,14
	srli	s0,t6,18
	add	t2,t2,t3
	slli	t3,t6,46
	xor	s1,t0,a2
	add	s0,s0,t3
	add	a3,s8,s11
	and	s1,s1,t6
	add	a3,a3,a6
	xor	t2,t2,s0
	slli	a6,a5,36
	slli	s0,a5,30
	srli	t5,a5,28
	srli	t3,a5,34
	add	t3,t3,s0
	add	t5,t5,a6
	xor	a6,s1,t0
	xor	t5,t5,t3
	srli	s1,t6,41
	slli	t3,s6,63
	add	a6,a6,a3
	srli	s0,s6,1
	slli	a3,t6,23
	add	s0,s0,t3
	add	a3,s1,a3
	srli	t3,s6,8
	slli	s1,s6,56
	add	t3,t3,s1
	xor	s0,s0,t3
	xor	a3,t2,a3
	srli	t3,a5,39
	slli	t2,a5,25
	add	t2,t3,t2
	xor	t3,t4,a5
	and	a1,a1,t3
	add	a3,a6,a3
	xor	t2,t5,t2
	xor	a1,a1,t4
	srli	t5,s9,19
	slli	a6,s9,45
	add	a6,t5,a6
	add	a1,t2,a1
	srli	t5,s9,61
	slli	t2,s9,3
	add	t5,t5,t2
	xor	a6,a6,t5
	srli	t2,s6,7
	add	t5,a4,a3
	ld	a4,16(sp)
	xor	s0,s0,t2
	ld	s1,-56(a0)
	add	s0,s0,s7
	srli	t2,s9,6
	xor	t2,a6,t2
	add	s0,s0,a4
	add	a1,a1,a3
	add	s7,s0,t2
	slli	a3,t5,50
	srli	t2,t5,14
	srli	s0,t5,18
	add	a6,s7,s1
	add	t2,t2,a3
	slli	a3,t5,46
	xor	a4,a2,t6
	add	s0,s0,a3
	add	a6,a6,t0
	srli	a3,a1,28
	slli	t0,a1,36
	xor	t2,t2,s0
	and	a4,a4,t5
	slli	s0,a1,30
	add	t0,a3,t0
	srli	a3,a1,34
	xor	a4,a4,a2
	add	a3,a3,s0
	srli	s1,t5,41
	xor	t0,t0,a3
	add	a6,a6,a4
	slli	a3,s5,63
	srli	s0,s5,1
	slli	a4,t5,23
	add	s0,s0,a3
	add	a4,s1,a4
	srli	a3,s5,8
	slli	s1,s5,56
	add	a3,a3,s1
	xor	a3,s0,a3
	xor	a4,t2,a4
	srli	s0,a1,39
	slli	t2,a1,25
	add	t2,s0,t2
	xor	s0,a5,a1
	and	t3,t3,s0
	add	a4,a6,a4
	xor	t2,t0,t2
	xor	t3,t3,a5
	srli	t0,s8,19
	slli	a6,s8,45
	add	a6,t0,a6
	add	t3,t2,t3
	srli	t0,s8,61
	slli	t2,s8,3
	add	t1,t1,a4
	add	t3,t3,a4
	add	t2,t0,t2
	ld	a4,24(sp)
	srli	t0,s5,7
	xor	t0,a3,t0
	ld	s1,-48(a0)
	xor	a3,a6,t2
	add	t0,t0,s6
	srli	a6,s8,6
	xor	a6,a3,a6
	add	t0,t0,a4
	add	s6,t0,a6
	slli	a6,t1,50
	srli	t0,t1,14
	add	a3,s6,s1
	srli	t2,t1,18
	add	t0,t0,a6
	slli	a6,t1,46
	xor	a4,t6,t5
	add	t2,t2,a6
	add	a2,a3,a2
	srli	a6,t3,28
	slli	a3,t3,36
	xor	t0,t0,t2
	and	a4,a4,t1
	slli	t2,t3,30
	add	a6,a6,a3
	srli	a3,t3,34
	xor	a4,a4,t6
	add	a3,a3,t2
	srli	s1,t1,41
	xor	a6,a6,a3
	add	a2,a2,a4
	slli	a3,s4,63
	srli	t2,s4,1
	slli	a4,t1,23
	add	t2,t2,a3
	add	a4,s1,a4
	srli	a3,s4,8
	slli	s1,s4,56
	add	a3,a3,s1
	xor	a3,t2,a3
	xor	a4,t0,a4
	srli	t2,t3,39
	slli	t0,t3,25
	add	t2,t2,t0
	xor	t0,a1,t3
	and	s0,s0,t0
	add	a4,a2,a4
	xor	t2,a6,t2
	xor	s0,s0,a1
	srli	a6,s7,19
	slli	a2,s7,45
	add	a2,a6,a2
	add	s0,t2,s0
	srli	a6,s7,61
	slli	t2,s7,3
	add	a6,a6,t2
	srli	t2,s4,7
	add	s0,s0,a4
	xor	t2,a3,t2
	add	a3,t4,a4
	ld	a4,8(sp)
	ld	s1,-40(a0)
	xor	a2,a2,a6
	add	t2,t2,s5
	srli	a6,s7,6
	xor	a6,a2,a6
	add	t2,t2,a4
	add	s5,t2,a6
	srli	a4,a3,14
	slli	a6,a3,50
	srli	t2,a3,18
	add	t4,s5,s1
	add	a4,a4,a6
	slli	a6,a3,46
	xor	a2,t5,t1
	add	t2,t2,a6
	add	t4,t4,t6
	srli	a6,s0,28
	slli	t6,s0,36
	xor	a4,a4,t2
	and	a2,a2,a3
	slli	t2,s0,30
	add	t6,a6,t6
	srli	a6,s0,34
	xor	a2,a2,t5
	add	a6,a6,t2
	srli	s1,a3,41
	xor	t6,t6,a6
	add	t4,t4,a2
	slli	a6,s3,63
	srli	t2,s3,1
	slli	a2,a3,23
	add	t2,t2,a6
	add	a2,s1,a2
	srli	a6,s3,8
	slli	s1,s3,56
	add	a6,a6,s1
	xor	t2,t2,a6
	slli	s1,s0,25
	srli	a6,s0,39
	xor	a2,a4,a2
	add	s1,a6,s1
	add	a2,t4,a2
	xor	s1,t6,s1
	slli	t4,s6,45
	srli	t6,s6,19
	xor	a6,t3,s0
	add	t4,t6,t4
	slli	a4,s6,3
	srli	t6,s6,61
	ld	s11,32(sp)
	add	a4,t6,a4
	and	t0,t0,a6
	srli	t6,s3,7
	xor	t0,t0,t3
	xor	t2,t2,t6
	add	t0,s1,t0
	xor	t4,t4,a4
	ld	s1,-32(a0)
	add	t2,t2,s4
	srli	t6,s6,6
	add	a5,a5,a2
	xor	t6,t4,t6
	add	t2,t2,s11
	add	a4,t0,a2
	add	s4,t2,t6
	srli	t0,a5,14
	slli	t6,a5,50
	add	t4,s4,s1
	srli	t2,a5,18
	add	t0,t0,t6
	slli	t6,a5,46
	xor	a2,t1,a3
	add	t2,t2,t6
	add	t5,t4,t5
	srli	t6,a4,28
	slli	t4,a4,36
	xor	t0,t0,t2
	and	a2,a2,a5
	slli	t2,a4,30
	add	t6,t6,t4
	srli	t4,a4,34
	xor	a2,a2,t1
	add	t4,t4,t2
	srli	s1,a5,41
	xor	t6,t6,t4
	add	t5,t5,a2
	slli	t4,s2,63
	srli	t2,s2,1
	slli	a2,a5,23
	add	t2,t2,t4
	add	a2,s1,a2
	srli	t4,s2,8
	slli	s1,s2,56
	add	t4,t4,s1
	xor	t4,t2,t4
	xor	s1,s0,a4
	srli	t2,a4,39
	xor	a2,t0,a2
	slli	t0,a4,25
	add	t0,t2,t0
	and	a6,a6,s1
	add	a2,t5,a2
	xor	t0,t6,t0
	xor	a6,a6,s0
	srli	t6,s5,19
	slli	t5,s5,45
	add	t5,t6,t5
	add	a6,t0,a6
	srli	t6,s5,61
	slli	t0,s5,3
	add	t0,t6,t0
	srli	t6,s2,7
	xor	t6,t4,t6
	ld	t2,-24(a0)
	xor	t4,t5,t0
	add	t6,t6,s3
	srli	t5,s5,6
	add	a1,a1,a2
	xor	t5,t4,t5
	add	t6,t6,s10
	add	s3,t6,t5
	slli	t5,a1,50
	srli	t6,a1,14
	add	a6,a6,a2
	add	t4,s3,t2
	add	t6,t6,t5
	srli	t0,a1,18
	slli	t5,a1,46
	xor	a2,a3,a5
	add	t0,t0,t5
	add	t4,t4,t1
	srli	t5,a6,28
	slli	t1,a6,36
	xor	t6,t6,t0
	add	t5,t5,t1
	slli	t0,a6,30
	and	a2,a2,a1
	srli	t1,a6,34
	xor	a2,a2,a3
	add	t1,t1,t0
	xor	t5,t5,t1
	add	t4,t4,a2
	slli	t1,a7,63
	srli	t2,a1,41
	srli	t0,a7,1
	slli	a2,a1,23
	add	t0,t0,t1
	add	a2,t2,a2
	srli	t1,a7,8
	slli	t2,a7,56
	add	t1,t1,t2
	xor	t1,t0,t1
	xor	s11,a4,a6
	srli	t0,a6,39
	xor	a2,t6,a2
	slli	t6,a6,25
	add	t6,t0,t6
	and	s1,s1,s11
	add	a2,t4,a2
	xor	t6,t5,t6
	xor	s1,s1,a4
	srli	t5,s4,19
	slli	t4,s4,45
	add	t4,t5,t4
	add	s1,t6,s1
	srli	t5,s4,61
	slli	t6,s4,3
	add	t6,t5,t6
	srli	t5,a7,7
	xor	t5,t1,t5
	ld	t0,-16(a0)
	xor	t1,t4,t6
	add	t5,t5,s2
	srli	t4,s4,6
	add	t3,t3,a2
	xor	t4,t1,t4
	add	t5,t5,s9
	add	s2,t5,t4
	slli	t4,t3,50
	srli	t5,t3,14
	add	s1,s1,a2
	add	t1,s2,t0
	add	t5,t5,t4
	srli	t6,t3,18
	slli	t4,t3,46
	ld	t2,48(sp)
	add	t6,t6,t4
	add	a3,t1,a3
	xor	a2,a5,a1
	slli	t1,s1,36
	srli	t4,s1,28
	xor	t5,t5,t6
	add	t4,t4,t1
	slli	t6,s1,30
	and	a2,a2,t3
	srli	t1,s1,34
	add	t1,t1,t6
	xor	a2,a2,a5
	xor	t4,t4,t1
	add	a2,a2,a3
	srli	t0,t3,41
	slli	t1,t2,63
	srli	t6,t2,1
	slli	a3,t3,23
	add	t6,t6,t1
	add	a3,t0,a3
	srli	t1,t2,8
	slli	t0,t2,56
	add	t1,t1,t0
	xor	t6,t6,t1
	xor	a3,t5,a3
	srli	t1,s1,39
	slli	t5,s1,25
	add	t5,t1,t5
	xor	t1,a6,s1
	and	s11,s11,t1
	add	a3,a2,a3
	xor	t5,t4,t5
	xor	s11,s11,a6
	srli	t4,s3,19
	slli	a2,s3,45
	add	a2,t4,a2
	add	s11,t5,s11
	srli	t4,s3,61
	slli	t5,s3,3
	add	t4,t4,t5
	srli	t5,t2,7
	xor	t5,t6,t5
	xor	a2,a2,t4
	add	a7,t5,a7
	srli	t4,s3,6
	ld	t5,-8(a0)
	xor	t4,a2,t4
	add	a7,a7,s8
	add	s0,s0,a3
	add	a7,a7,t4
	add	s11,s11,a3
	add	t4,a7,t5
	slli	a3,s0,50
	xor	t0,a1,t3
	srli	t6,s0,14
	add	t6,t6,a3
	add	t4,t4,a5
	and	t0,t0,s0
	slli	a3,s0,46
	slli	a5,s11,36
	srli	a2,s0,18
	srli	t5,s11,28
	add	t5,t5,a5
	add	a2,a2,a3
	xor	a5,t0,a1
	srli	a3,s11,34
	slli	t0,s11,30
	add	a3,a3,t0
	xor	a3,t5,a3
	xor	a2,t6,a2
	slli	t5,s0,23
	srli	t6,s0,41
	add	t5,t6,t5
	add	a5,a5,t4
	srli	t6,s11,39
	slli	t4,s11,25
	add	t4,t6,t4
	xor	t6,s1,s11
	and	t1,t1,t6
	xor	t4,a3,t4
	xor	a2,a2,t5
	xor	t1,t1,s1
	add	a5,a5,a2
	add	t4,t4,t1
	add	a4,a4,a5
	add	a3,t4,a5
	ld	a5,64(sp)
	bne	a0,a5,.L3
	ld	t0,128(sp)
	ld	t2,120(sp)
	ld	a5,56(sp)
	add	t0,t0,a4
	ld	a4,96(sp)
	add	t2,t2,a3
	ld	a3,72(sp)
	add	a4,a4,s0
	sd	a4,96(sp)
	ld	a4,104(sp)
	add	a3,a3,s11
	sd	a3,72(sp)
	ld	a3,80(sp)
	add	a4,a4,t3
	sd	a4,104(sp)
	ld	a4,112(sp)
	add	a3,a3,s1
	sd	a3,80(sp)
	ld	a3,88(sp)
	add	a4,a4,a1
	sd	a4,112(sp)
	ld	a4,320(sp)
	addi	a5,a5,128
	add	a3,a3,a6
	sd	a5,56(sp)
	sd	a3,88(sp)
	bne	a4,a5,.L4
	ld	a5,328(sp)
	ld	a4,72(sp)
	ld	s0,432(sp)
	.cfi_restore 8
	ld	s1,424(sp)
	.cfi_restore 9
	sd	a4,8(a5)
	ld	a4,80(sp)
	ld	s2,416(sp)
	.cfi_restore 18
	ld	s3,408(sp)
	.cfi_restore 19
	sd	a4,16(a5)
	ld	a4,96(sp)
	ld	s4,400(sp)
	.cfi_restore 20
	ld	s5,392(sp)
	.cfi_restore 21
	sd	a4,40(a5)
	ld	a4,104(sp)
	ld	s6,384(sp)
	.cfi_restore 22
	ld	s7,376(sp)
	.cfi_restore 23
	sd	a4,48(a5)
	ld	a4,112(sp)
	ld	s8,368(sp)
	.cfi_restore 24
	ld	s9,360(sp)
	.cfi_restore 25
	ld	s10,352(sp)
	.cfi_restore 26
	ld	s11,344(sp)
	.cfi_restore 27
	sd	t2,0(a5)
	sd	a3,24(a5)
	sd	t0,32(a5)
	sd	a4,56(a5)
.L1:
	ld	ra,440(sp)
	.cfi_restore 1
	addi	sp,sp,448
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE3187:
	.size	_Z14sha512_invokerPmPKSt4byteS2_, .-_Z14sha512_invokerPmPKSt4byteS2_
	.weak	_ZN7ufio7details6sha51210k512scalarE
	.section	.rodata._ZN7ufio7details6sha51210k512scalarE,"aG",@progbits,_ZN7ufio7details6sha51210k512scalarE,comdat
	.align	3
	.type	_ZN7ufio7details6sha51210k512scalarE, @object
	.size	_ZN7ufio7details6sha51210k512scalarE, 512
_ZN7ufio7details6sha51210k512scalarE:
	.dword	-1973867731355612462
	.dword	-1171420211273849373
	.dword	1135362057144423861
	.dword	2597628984639134821
	.dword	3308224258029322869
	.dword	5365058923640841347
	.dword	6679025012923562964
	.dword	8573033837759648693
	.dword	-7476448914759557205
	.dword	-6327057829258317296
	.dword	-5763719355590565569
	.dword	-4658551843659510044
	.dword	-4116276920077217854
	.dword	-3051310485924567259
	.dword	489312712824947311
	.dword	1452737877330783856
	.dword	2861767655752347644
	.dword	3322285676063803686
	.dword	5560940570517711597
	.dword	5996557281743188959
	.dword	7280758554555802590
	.dword	8532644243296465576
	.dword	-9096487096722542874
	.dword	-7894198246740708037
	.dword	-6719396339535248540
	.dword	-6333637450476146687
	.dword	-4446306890439682159
	.dword	-4076793802049405392
	.dword	-3345356375505022440
	.dword	-2983346525034927856
	.dword	-860691631967231958
	.dword	1182934255886127544
	.dword	1847814050463011016
	.dword	2177327727835720531
	.dword	2830643537854262169
	.dword	3796741975233480872
	.dword	4115178125766777443
	.dword	5681478168544905931
	.dword	6601373596472566643
	.dword	7507060721942968483
	.dword	8399075790359081724
	.dword	8693463985226723168
	.dword	-8878714635349349518
	.dword	-8302665154208450068
	.dword	-8016688836872298968
	.dword	-6606660893046293015
	.dword	-4685533653050689259
	.dword	-4147400797238176981
	.dword	-3880063495543823972
	.dword	-3348786107499101689
	.dword	-1523767162380948706
	.dword	-757361751448694408
	.dword	500013540394364858
	.dword	748580250866718886
	.dword	1242879168328830382
	.dword	1977374033974150939
	.dword	2944078676154940804
	.dword	3659926193048069267
	.dword	4368137639120453308
	.dword	4836135668995329356
	.dword	5532061633213252278
	.dword	6448918945643986474
	.dword	6902733635092675308
	.dword	7801388544844847127
	.globl	__bswapdi2
	.ident	"GCC: (GNU) 15.0.0 20240727 (experimental)"
	.section	.note.GNU-stack,"",@progbits
