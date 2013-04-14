#ifndef FUWUSALELINKGENREQUEST_H
#define FUWUSALELINKGENREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FuwuSaleLinkGenResponse.h>

/**
 * TOP API: 服务商通过使用该接口来产生营销链接，通过把这种链接发送给商家来做自定义人群的服务营销<br> 
注：session是param_str这个参数串创建者生成的session，这个创建者与入参中的nick是不一致的。例如：A开发者创建了一个param_str的字符串，要为B商家生成一个营销链接，session必须是A开发者创建的session。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FuwuSaleLinkGenRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getNick() const
;  void setNick (QString nick);

 QString getParamStr() const
;  void setParamStr (QString paramStr);


  virtual FuwuSaleLinkGenResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 用户需要营销的目标人群中的用户nick
 **/
  QString nick;

/**
 * @brief 从服务商后台，营销链接功能中生成的参数串直接复制使用。不要修改，否则抛错。
 **/
  QString paramStr;

};

#endif  /* FUWUSALELINKGENREQUEST_H */
