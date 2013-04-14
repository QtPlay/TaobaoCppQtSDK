#ifndef TOPSPM_H
#define TOPSPM_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 提供查询APPKey为淘宝带来成交以及流量
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopSpm : public TaoDomain
{

public:
 virtual ~TopSpm() { }

  QString getAlipayDealAmount() const;
  void setAlipayDealAmount (QString alipayDealAmount);
  qlonglong getAlipayDealCount() const;
  void setAlipayDealCount (qlonglong alipayDealCount);
  qlonglong getAlipayUv() const;
  void setAlipayUv (qlonglong alipayUv);
  QString getModule() const;
  void setModule (QString module);
  QString getPage() const;
  void setPage (QString page);
  qlonglong getPv() const;
  void setPv (qlonglong pv);
  qlonglong getUv() const;
  void setUv (qlonglong uv);
  
  virtual void parseResponse();

private:
/**
 * @brief 为淘宝带来的支付宝成交金额
 **/
  QString alipayDealAmount;

/**
 * @brief 为淘宝带来的支付宝成交笔数
 **/
  qlonglong alipayDealCount;

/**
 * @brief 为淘宝带来的支付宝成交人数
 **/
  qlonglong alipayUv;

/**
 * @brief SPM第四位编码（默认为TOP系统自动生成的0-9数字，ISV可以自行更改编码，但建议使用数字）
 **/
  QString module;

/**
 * @brief SPM第三位编码（默认为TOP系统自动生成的0-9数字，ISV可以自行更改编码，但建议使用数字）
 **/
  QString page;

/**
 * @brief 为淘宝带来的PV
 **/
  qlonglong pv;

/**
 * @brief 为淘宝带来的UV
 **/
  qlonglong uv;

};

#endif  /* TOPSPM_H */
