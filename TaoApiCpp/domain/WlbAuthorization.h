#ifndef WLBAUTHORIZATION_H
#define WLBAUTHORIZATION_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 授权关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbAuthorization : public TaoDomain
{

public:
 virtual ~WlbAuthorization() { }

  QDateTime getAuthorizeEndTime() const;
  void setAuthorizeEndTime (QDateTime authorizeEndTime);
  qlonglong getAuthorizeId() const;
  void setAuthorizeId (qlonglong authorizeId);
  QDateTime getAuthorizeStartTime() const;
  void setAuthorizeStartTime (QDateTime authorizeStartTime);
  qlonglong getConsignUserId() const;
  void setConsignUserId (qlonglong consignUserId);
  qlonglong getItemId() const;
  void setItemId (qlonglong itemId);
  QString getName() const;
  void setName (QString name);
  qlonglong getOwnerUserId() const;
  void setOwnerUserId (qlonglong ownerUserId);
  qlonglong getQuantity() const;
  void setQuantity (qlonglong quantity);
  QString getRuleCode() const;
  void setRuleCode (QString ruleCode);
  QString getStatus() const;
  void setStatus (QString status);
  
  virtual void parseResponse();

private:
/**
 * @brief 授权结束时间
 **/
  QDateTime authorizeEndTime;

/**
 * @brief 授权ID
 **/
  qlonglong authorizeId;

/**
 * @brief 授权开始时间
 **/
  QDateTime authorizeStartTime;

/**
 * @brief 代销人用户ID
 **/
  qlonglong consignUserId;

/**
 * @brief 授权商品ID
 **/
  qlonglong itemId;

/**
 * @brief 授权名称
 **/
  QString name;

/**
 * @brief 货主用户ID
 **/
  qlonglong ownerUserId;

/**
 * @brief 授权数量
 **/
  qlonglong quantity;

/**
 * @brief 授权编码
 **/
  QString ruleCode;

/**
 * @brief 状态： 
VALID -- 1 有效 
INVALIDATION -- 2 失效
 **/
  QString status;

};

#endif  /* WLBAUTHORIZATION_H */
