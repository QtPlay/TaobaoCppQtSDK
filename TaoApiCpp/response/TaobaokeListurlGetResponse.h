#ifndef TAOBAOKELISTURLGETRESPONSE_H
#define TAOBAOKELISTURLGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/TaobaokeItem.h>


/**
 * @brief TOP RESPONSE API: 淘宝客关键词搜索URL. 
<p>由于受到<a href="http://club.alimama.com/read-htm-tid-3133847.html">淘宝联盟pid升级规则</a>影响，该接口后续可能会下线。建议直接使用拼链接的方式（塞入完整的pid）来获取搜索结果，而不是调用该接口来获取结果</p> 
<p>拼接的格式为：http://s8.taobao.com/browse/search_auction.htm?q=$url_encode($keywords)&pid=mm_xxx_xxx_xxx&search_type=auction&commend=all&at_topsearch=1&unid=$outer_code&spm=2014.$appkey.$apmc.$spmd</p>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TaobaokeListurlGetResponse : public TaoResponse
{
public:
 virtual ~TaobaokeListurlGetResponse() { }

  TaobaokeItem getTaobaokeItem() const;
  void setTaobaokeItem (TaobaokeItem taobaokeItem);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 只返回keyword_click_url
 **/
  TaobaokeItem taobaokeItem;

};

#endif
