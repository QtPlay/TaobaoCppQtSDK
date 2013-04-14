#ifndef TAOBAOKELISTURLGETREQUEST_H
#define TAOBAOKELISTURLGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TaobaokeListurlGetResponse.h>

/**
 * TOP API: 淘宝客关键词搜索URL. 
<p>由于受到<a href="http://club.alimama.com/read-htm-tid-3133847.html">淘宝联盟pid升级规则</a>影响，该接口后续可能会下线。建议直接使用拼链接的方式（塞入完整的pid）来获取搜索结果，而不是调用该接口来获取结果</p> 
<p>拼接的格式为：http://s8.taobao.com/browse/search_auction.htm?q=$url_encode($keywords)&pid=mm_xxx_xxx_xxx&search_type=auction&commend=all&at_topsearch=1&unid=$outer_code&spm=2014.$appkey.$apmc.$spmd</p>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TaobaokeListurlGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getNick() const
;  void setNick (QString nick);

 QString getOuterCode() const
;  void setOuterCode (QString outerCode);

 qlonglong getPid() const
;  void setPid (qlonglong pid);

 QString getQ() const
;  void setQ (QString q);


  virtual TaobaokeListurlGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广者的淘宝会员昵称.注：这里指的是淘宝的登录会员名
 **/
  QString nick;

/**
 * @brief 自定义输入串.格式:英文和数字组成;长度不能大于12个字符,区分不同的推广渠道,如:bbs,表示bbs为推广渠道;blog,表示blog为推广渠道.
 **/
  QString outerCode;

/**
 * @brief 用户的pid,必须是mm_xxxx_0_0这种格式中间的"xxxx". 注意nick和pid至少需要传递一个,如果2个都传了,将以pid为准,且pid的最大长度是20
 **/
  qlonglong pid;

/**
 * @brief 关键词
 **/
  QString q;

};

#endif  /* TAOBAOKELISTURLGETREQUEST_H */
