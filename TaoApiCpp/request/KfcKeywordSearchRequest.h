#ifndef KFCKEYWORDSEARCHREQUEST_H
#define KFCKEYWORDSEARCHREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/KfcKeywordSearchResponse.h>

/**
 * TOP API: 对输入的文本信息进行禁忌关键词匹配，返回匹配的结果
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class KfcKeywordSearchRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getApply() const
;  void setApply (QString apply);

 QString getContent() const
;  void setContent (QString content);

 QString getNick() const
;  void setNick (QString nick);


  virtual KfcKeywordSearchResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 应用点，分为一级应用点、二级应用点。其中一级应用点通常是指某一个系统或产品，比如淘宝的商品应用（taobao_auction）；二级应用点，是指一级应用点下的具体的分类，比如商品标题(title)、商品描述(content)。不同的二级应用可以设置不同关键词。 
 
这里的apply参数是由一级应用点与二级应用点合起来的字符（一级应用点+"."+二级应用点），如taobao_auction.title。 
 
 
通常apply参数是不需要传递的。如有特殊需求（比如特殊的过滤需求，需要自己维护一套自己词库），需传递此参数。
 **/
  QString apply;

/**
 * @brief 需要过滤的文本信息
 **/
  QString content;

/**
 * @brief 发布信息的淘宝会员名，可以不传
 **/
  QString nick;

};

#endif  /* KFCKEYWORDSEARCHREQUEST_H */
