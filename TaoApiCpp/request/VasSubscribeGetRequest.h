#ifndef VASSUBSCRIBEGETREQUEST_H
#define VASSUBSCRIBEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/VasSubscribeGetResponse.h>

/**
 * TOP API: 用于ISV根据登录进来的淘宝会员名查询该为该会员开通哪些收费项目，ISV只能查询自己名下的应用及收费项目的订购情况
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class VasSubscribeGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getArticleCode() const
;  void setArticleCode (QString articleCode);

 QString getNick() const
;  void setNick (QString nick);


  virtual VasSubscribeGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 应用收费代码，从合作伙伴后台（my.open.taobao.com）-收费管理-收费项目列表 能够获得该应用的收费代码
 **/
  QString articleCode;

/**
 * @brief 淘宝会员名
 **/
  QString nick;

};

#endif  /* VASSUBSCRIBEGETREQUEST_H */
