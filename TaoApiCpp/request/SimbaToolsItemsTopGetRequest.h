#ifndef SIMBATOOLSITEMSTOPGETREQUEST_H
#define SIMBATOOLSITEMSTOPGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaToolsItemsTopGetResponse.h>

/**
 * TOP API: 取得一个关键词的推广组排名列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaToolsItemsTopGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getIp() const
;  void setIp (QString ip);

 QString getKeyword() const
;  void setKeyword (QString keyword);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaToolsItemsTopGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 输入的必须是一个符合ipv4或者ipv6格式的IP地址
 **/
  QString ip;

/**
 * @brief 关键词
 **/
  QString keyword;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBATOOLSITEMSTOPGETREQUEST_H */
