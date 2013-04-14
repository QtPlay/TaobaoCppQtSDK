#ifndef ALIPAYUSERDETAIL_H
#define ALIPAYUSERDETAIL_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 支付宝会员信息详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class AlipayUserDetail : public TaoDomain
{

public:
 virtual ~AlipayUserDetail() { }

  QString getAlipayUserId() const;
  void setAlipayUserId (QString alipayUserId);
  bool getCertified() const;
  void setCertified (bool certified);
  QString getLogonId() const;
  void setLogonId (QString logonId);
  QString getRealName() const;
  void setRealName (QString realName);
  QString getSex() const;
  void setSex (QString sex);
  QString getUserStatus() const;
  void setUserStatus (QString userStatus);
  QString getUserType() const;
  void setUserType (QString userType);
  
  virtual void parseResponse();

private:
/**
 * @brief 支付宝用户userId
 **/
  QString alipayUserId;

/**
 * @brief 是否通过实名认证
 **/
  bool certified;

/**
 * @brief 支付宝登录号
 **/
  QString logonId;

/**
 * @brief 真实姓名
 **/
  QString realName;

/**
 * @brief 性别。可选值:m(男),f(女)
 **/
  QString sex;

/**
 * @brief 用户状态。可选:normal(正常), supervise (监管),delete(注销)
 **/
  QString userStatus;

/**
 * @brief 用户类型。可选：personal（个人），company（公司）
 **/
  QString userType;

};

#endif  /* ALIPAYUSERDETAIL_H */
