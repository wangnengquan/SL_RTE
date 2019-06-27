/**
  ******************************************************************************
  * @file    RTE_Config.h
  * @author  Shan Lei ->>lurenjia.tech ->>https://github.com/sudashannon
  * @brief   RTE��������ͷ�ļ�������KEIL��ʽ��д��ΪRTE�������вü����á�
  * @version V2.0 2019/06/06 �ڶ���
						 V1.0 2018/11/02 ��һ��
  ******************************************************************************
  */
#ifndef __RTE_CONFIG_H
#define __RTE_CONFIG_H
#ifdef __cplusplus
extern "C" {
#endif
//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------
//=======================
//  <h> RTE��������
//=======================
//      <s> RTE�汾��
//      <i> ���嶨�������ĵ���
#define RTE_VERSION          "4.0.0606"
//      <q> ʵʱ����ϵͳ����
//      <i> Ĭ����RTX5
#define RTE_USE_OS                 1
//      <q> ������PC������
//      <i> Ĭ����Ƕ��ʽ����
#define RTE_USE_PC                 1
//=======================
//  </h> RTE��������
//=======================
//=======================
//  <e> ��׼���ģ��
//=======================
//  <i> �ṩprintf�������ʵ�֣�����ģ�飺�ޡ�
#define RTE_USE_PRINTF             1
#if RTE_USE_PRINTF == 1
// 		<o> ntoa�����С
// 		<i> 'ntoa'����ʹ�õĻ��棬������ջ�ϡ�Ĭ�ϴ�С: 32 byte��
#define PRINTF_NTOA_BUFFER_SIZE    32U
// 		<o> ftoa�����С
// 		<i> 'ftoa'����ʹ�õĻ��棬������ջ�ϡ�Ĭ�ϴ�С: 32 byte��
#define PRINTF_FTOA_BUFFER_SIZE    32U
// 		<e> %f֧��
// 		<i> ʹ��%f��ʽ���
#define PRINTF_SUPPORT_FLOAT       1
#if PRINTF_SUPPORT_FLOAT == 1
// 		<o> %f������ݾ���
// 		<i> define the default floating point precision default: 6 digits
#define PRINTF_DEFAULT_FLOAT_PRECISION  6U
// 		<o> %f����������
// 		<i> define the largest float suitable to print with %f default: 1e9
#define PRINTF_MAX_FLOAT           1e9
#endif
//      </e> %f֧��
// 		<q> %e/%g֧��
// 		<i> ʹ��%e/%g��ʽ���
#define PRINTF_SUPPORT_EXPONENTIAL 1
// 		<q> %llu/%p֧��
// 		<i> support for the long long types (%llu or %p) default: activated
#define PRINTF_SUPPORT_LONG_LONG   1
// 		<q> %t֧��
// 		<i> support for the ptrdiff_t type (%t) ptrdiff_t is normally defined in <stddef.h> as long or long long type
// 		<i> default: activated
#define PRINTF_SUPPORT_PTRDIFF_T   1
#endif
//=======================
//  </e> ��׼���ģ��
//=======================
//=======================
//  <e> ��̬�ڴ�ģ��
//=======================
//  <i> ʹ��RTE�Դ��Ķ�̬�ڴ��������ģ�飺�ޡ�
#define RTE_USE_MEMORY             1
#if RTE_USE_MEMORY == 1
// 		<o> ��̬�ڴ�������� <0=>LVGL <1=>TLSF
// 		<i> ���ö�̬�ڴ���������
// 		<i>                  LVGL���߽�궨������Դ�����٣���Ƭ�࣬����8K�ڴ�����ʹ�ã�
// 		<i>                  TLSF��TLSF������Դ���Ĵ���Ƭ�٣�����8K�ڴ�����ʹ�ã�
#define MEMORY_TYPE                1
// 		<q> 64λ������ʹ��
#define MEMORY_64BIT               1
// 		<q> ��̬�ڴ�ģ�������Ϣ
// 		<i> ʹ�ܶ�̬�ڴ�ģ�������Ϣ���
#define MEMORY_DEBUG               1
//      <o> RTE�ڴ���С
//      <i> RTEʹ�õö�̬�ڴ��С
//      <i> Ĭ�ϴ�С: 32����λ��K��
#define RTE_MEM_SIZE    		        (1024*1024U)
#if MEMORY_TYPE == 0
//      <h> LVGL�����²�������
// 			<q> �Զ���Ƭ����
#define  MEMORY_SIMPLE_AUTODEFRAG  1
//      </h> ��ģʽ
#endif
#endif
//=======================
//  </e> ��̬�ڴ�ģ��
//=======================
//=======================
//  <e> ��̬����ģ��
//=======================
//  <i> ʹ��RTE�Դ��Ķ�̬�����������ģ�飺��̬�ڴ�ģ�顣
#define RTE_USE_VEC                1
#if RTE_USE_VEC == 1
#if RTE_USE_MEMORY == 0
#error "��Ҫ��̬�ڴ�ģ���֧��"
#endif
#endif
//=======================
//  </e> RTE��̬����ģ��
//=======================
//=======================
//  <e> RTEʱ��Ƭ��ѯģ��
//=======================
//  <i> ��������ϵͳ�����µ�ʱ��Ƭ��ת���ȣ�����ģ�飺SIMPLEģʽ������������ģʽ����vecģ�飬��̬�ڴ�ģ�顣
#define RTE_USE_ROUNDROBIN            1
#if RTE_USE_ROUNDROBIN == 1
// 		<o> ʱ��Ƭ��ѯ���� <0=>SIMPLE <1=>BASE <2=>FULL
// 		<i> ����ʱ��Ƭ��ѯ������
// 		<i>                SIMPLE����ʱ��Ƭ��ѯ����̬������Ҫ�ֶ�ά��RRͷ�ļ��еĶ�ʱ����
// 		<i>                BASE������ʱ��Ƭ��ѯ����̬���������飬��ʱ���������û�ά����
// 		<i>                FULL������ʱ��Ƭ��ѯ����̬�����ʺ϶��̻߳����������ƺͶ�ʱ���������û�ά����
#define RR_TYPE                       1
// 		<q> ʱ��Ƭ��ѯ������Ϣ
// 		<i> ʹ��ʱ��Ƭ��ѯ������Ϣ���
#define RR_DEBUG                      1
// 		<q> DWT������
// 		<i> ʹ��DWT��������US������ʱ����
#define RR_DWT                        0
#if RR_TYPE == 0

#elif RR_TYPE == 1
#if RTE_USE_VEC == 0 || RTE_USE_MEMORY == 0
#error "��ҪVECģ���Լ���̬�ڴ�ģ���֧��"
#endif
			// <o> BASEģʽ����ת�������֧�ֵ�Timer��Ŀ
			// <i> Ĭ�ϴ�С: 16
			#define RR_MAX_NUM    		  16
#elif RR_TYPE == 2
#if RTE_USE_VEC == 0 || RTE_USE_MEMORY == 0
#error "��ҪVECģ���Լ���̬�ڴ�ģ���֧��"
#endif
			// <o> FULLģʽ����ת�������֧�ֵ�Timer��Ŀ
			// <i> Ĭ�ϴ�С: 16
			#define RR_MAX_NUM    		  16
			// <o> FULLģʽ����ת�������֧�ֵ�Group��Ŀ
			// <i> Ĭ�ϴ�С: 4
			#define RR_MAX_GROUP_NUM      4
#endif
#endif
//=======================
//  </e> ʱ��Ƭ��ѯģ��
//=======================
//=======================
//  <e> ˫������ģ��
//=======================
//  <i> ʹ��RTE�Դ���˫������ģ�飬����ģ�飺��̬�ڴ�ģ�顣
#define RTE_USE_LL                    0
#if RTE_USE_LL == 1
#if RTE_USE_MEMORY == 0
#error "��Ҫ��̬�ڴ�ģ���֧��"
#endif
#endif
//=======================
//  </e> ˫������ģ��
//=======================
//=======================
//  <e> ������ģ��
//=======================
//  <i> ʹ��RTE�Դ���������������ģ�飺�ޣ���ѡ��̬�ڴ棩��
//  <i> �޶�̬�ڴ�ģ�����ʱ����Ҫ�ֶ�ά��Streamͷ�ļ��е���������
#define RTE_USE_STREAM                1
#if RTE_USE_STREAM == 1
// 		<q> ������������Ϣ
// 		<i> ʹ��������������Ϣ���
#define STREAM_DEBUG                      1
#if RTE_USE_MEMORY == 0
			// <o> Ĭ�϶��г���
			// <i> ��̬����ʱÿ�����е�Ĭ�ϳ���
			#define STATIC_QUENE_SIZE         8
			// <o> Ĭ�ϻ����С
			// <i> ��̬����ʱÿ�����е�Ĭ�ϻ���Ĵ�С
			#define STATIC_BUFFER_SIZE        1024
#endif
#endif
//=======================
//  </e> ������ģ��
//=======================
//=======================
//  <e> ״̬��ģ��
//=======================
//  <i> ʹ��RTE�Դ���״̬��ģ�ͣ�����ģ�飺��̬�����붯̬�ڴ档
#define RTE_USE_SM                    1
#if RTE_USE_SM == 1
#if RTE_USE_VEC == 0 || RTE_USE_MEMORY == 0
#error "��ҪVECģ���Լ���̬�ڴ�ģ���֧��"
#endif
#endif
//=======================
//  </e> ״̬��ģ��
//=======================
//=======================
// <e> SHELLģ��
//=======================
// <i> ��Ϣ����ģ�飬����ģ�飺���ζ���ģ�飬VECģ�飬��̬�ڴ����
#define RTE_USE_SHELL                 1
#if RTE_USE_SHELL == 1
#if RTE_USE_VEC == 0 || RTE_USE_MEMORY == 0 || RTE_USE_STREAM == 0
#error "��ҪVECģ�顢��̬�ڴ�ģ���Լ�������ģ���֧��"
#endif
	// <o> ���֧��ģ����Ŀ
	// <i> Ĭ�ϴ�С: 16
	#define SHELL_MAX_MODULE    		    16
	// <o> ģ���������Ŀ
	// <i> Ĭ�ϴ�С: 16
	#define SHELL_MAX_MODULE_FUC    		16
	// <o> �������֧�ֲ�����
	// <i> Ĭ�ϴ�С: 8
	#define SHELL_MAX_ARGS                  8
	// <o> ���ݻ����С
	// <i> Ĭ�ϴ�С: 32 [bytes]
	#define SHELL_BUF_SIZE    		       64
	// <o> ���ݶ��д�С
	// <i> Ĭ�ϴ�С: 4
	#define SHELL_QUENE_SIZE    		        4
#endif
//=======================
//  </e> SHELLģ��
//=======================
//=======================
// <e> KV���ݿ�ģ��
//=======================
// <i> ʹ��RTE�Դ���KV��ϵ���ݿ⣬����ģ�飺��׼�����
#define RTE_USE_KVDB                  0
	// <q> ���������Զ����¹���
	// <i> Auto update ENV to latest default when current ENV version number is changed.
	#define EF_ENV_AUTO_UPDATE          1
	#if EF_ENV_AUTO_UPDATE
	// <o> ���������汾
	#define EF_ENV_VER_NUM              3
	#endif
	// <q> IAP����
	#define EF_USING_IAP                0
	// <o> ��С������С
	// <i> ��λ��K
	#define EF_ERASE_MIN_SIZE          1024 // Ƭ��2048
	// <o> FLASHд�뵥Ԫ
	// <i> support 1(nor flash)/ 8(stm32f4)/ 32(stm32f1)/ 64(stm32l4)
	#define EF_WRITE_GRAN              32
	// <o> ����FLASH�׵�ַ
	#define EF_START_ADDR              (0x08000000 + 30 * 1024) //  Ƭ��0
	// <o> ����������С
	// <i> ��������������С����GC
	#define ENV_AREA_SIZE             (2 * EF_ERASE_MIN_SIZE)
//=======================
// </e> KV���ݿ�ģ��
//=======================
//=======================
//  <e> RTE����ģ��
//=======================
#define RTE_USE_ASSERT             1
#if RTE_USE_ASSERT == 1
extern void RTE_Assert(char *file, unsigned int line);
#define RTE_AssertParam(expr)                               {                                       \
																 if(!(expr))                        \
																 {                                  \
																		 RTE_Assert(__FILE__, __LINE__);\
																 }                                  \
															}
#else
#define RTE_AssertParam(expr) ((void)0)
#endif
//=======================
//  </e> RTE����ģ��
//=======================
#ifdef __cplusplus
}
#endif
#endif
