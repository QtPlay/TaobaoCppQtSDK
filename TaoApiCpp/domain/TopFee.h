#ifndef TOPFEE_H
#define TOPFEE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 运费模板中运费信息对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopFee : public TaoDomain
{

public:
 virtual ~TopFee() { }

  QString getAddFee() const;
  void setAddFee (QString addFee);
  QString getAddStandard() const;
  void setAddStandard (QString addStandard);
  QString getDestination() const;
  void setDestination (QString destination);
  QString getServiceType() const;
  void setServiceType (QString serviceType);
  QString getStartFee() const;
  void setStartFee (QString startFee);
  QString getStartStandard() const;
  void setStartStandard (QString startStandard);
  
  virtual void parseResponse();

private:
/**
 * @brief 增费：输入0.00-999.99（最多包含两位小数） 不能为空不输入运费时必须输入0
 **/
  QString addFee;

/**
 * @brief 增费标准：当valuation(记价方式)为0时输入1-9999范围内的整数
 **/
  QString addStandard;

/**
 * @brief 邮费子项涉及的地区,多个地区用逗号连接数量串;可以用taobao.areas.get接口获取.或者参考:http://www.stats.gov.cn/tjbz/xzqhdm/t20080215_402462675.htm 例 (110000,310000,320000,330000).就代表邮费子项涉 及(北京,上海,江苏,浙江)四个地区.填写时要注意对照地区代码值,如果填入错误地区代码,将会出现错误信息.
 **/
  QString destination;

/**
 * @brief 可选值：post:平邮; cod:货到付款; ems:EMS; express:快递公司
 **/
  QString serviceType;

/**
 * @brief 首费：输入0.01-999.99（最多包含两位小数） 不能为空也不能为0
 **/
  QString startFee;

/**
 * @brief 首费标准：当valuation(记价方式)为0时输入1-9999范围内的整数
 **/
  QString startStandard;

};

#endif  /* TOPFEE_H */
