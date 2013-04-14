#ifndef SUBACCOUNTINFO_H
#define SUBACCOUNTINFO_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 子账号基本信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubAccountInfo : public TaoDomain
{

public:
 virtual ~SubAccountInfo() { }

  bool getSubDispatchStatus() const;
  void setSubDispatchStatus (bool subDispatchStatus);
  qlonglong getSubId() const;
  void setSubId (qlonglong subId);
  QString getSubNick() const;
  void setSubNick (QString subNick);
  bool getSubOwedStatus() const;
  void setSubOwedStatus (bool subOwedStatus);
  qlonglong getSubStatus() const;
  void setSubStatus (qlonglong subStatus);
  qlonglong getUserId() const;
  void setUserId (qlonglong userId);
  QString getUserNick() const;
  void setUserNick (QString userNick);
  
  virtual void parseResponse();

private:
/**
 * @brief 子账号是否参与分流 true:参与分流 false:未参与分流
 **/
  bool subDispatchStatus;

/**
 * @brief 子账号Id
 **/
  qlonglong subId;

/**
 * @brief 子账号用户名
 **/
  QString subNick;

/**
 * @brief 子账号是否已欠费 true:已欠费 false:未欠费
 **/
  bool subOwedStatus;

/**
 * @brief 子账号当前状态：1正常，2卖家停用，3处罚冻结
 **/
  qlonglong subStatus;

/**
 * @brief 主账号Id
 **/
  qlonglong userId;

/**
 * @brief 主账号用户名
 **/
  QString userNick;

};

#endif  /* SUBACCOUNTINFO_H */
