#ifndef ACCOUNTFREEZE_H
#define ACCOUNTFREEZE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 支付宝用户冻结明细信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class AccountFreeze : public TaoDomain
{

public:
 virtual ~AccountFreeze() { }

  QString getFreezeAmount() const;
  void setFreezeAmount (QString freezeAmount);
  QString getFreezeName() const;
  void setFreezeName (QString freezeName);
  QString getFreezeType() const;
  void setFreezeType (QString freezeType);
  
  virtual void parseResponse();

private:
/**
 * @brief 冻结金额
 **/
  QString freezeAmount;

/**
 * @brief 冻结类型名称
 **/
  QString freezeName;

/**
 * @brief 冻结类型值
 **/
  QString freezeType;

};

#endif  /* ACCOUNTFREEZE_H */
