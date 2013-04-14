#ifndef SUBUSERINFO_H
#define SUBUSERINFO_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 子账号基本信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubUserInfo : public TaoDomain
{

public:
 virtual ~SubUserInfo() { }

  QString getFullName() const;
  void setFullName (QString fullName);
  qlonglong getIsOnline() const;
  void setIsOnline (qlonglong isOnline);
  QString getNick() const;
  void setNick (QString nick);
  qlonglong getSellerId() const;
  void setSellerId (qlonglong sellerId);
  QString getSellerNick() const;
  void setSellerNick (QString sellerNick);
  qlonglong getStatus() const;
  void setStatus (qlonglong status);
  qlonglong getSubId() const;
  void setSubId (qlonglong subId);
  
  virtual void parseResponse();

private:
/**
 * @brief 子账号姓名
 **/
  QString fullName;

/**
 * @brief 是否参与分流 1不参与 2参与
 **/
  qlonglong isOnline;

/**
 * @brief 子账号用户名
 **/
  QString nick;

/**
 * @brief 子账号所属的主账号的唯一标识
 **/
  qlonglong sellerId;

/**
 * @brief 主账号昵称
 **/
  QString sellerNick;

/**
 * @brief 子账号当前状态 1正常 -1删除  2冻结
 **/
  qlonglong status;

/**
 * @brief 子账号Id
 **/
  qlonglong subId;

};

#endif  /* SUBUSERINFO_H */
