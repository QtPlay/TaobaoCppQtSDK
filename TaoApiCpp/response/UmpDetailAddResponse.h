#ifndef UMPDETAILADDRESPONSE_H
#define UMPDETAILADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 增加活动详情。活动详情里面包括活动的范围（店铺，商品），活动的参数（比如具体的折扣），参与类型（全部，部分，部分不参加）等信息。当参与类型为部分或部分不参加的时候需要和taobao.ump.range.add来配合使用。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpDetailAddResponse : public TaoResponse
{
public:
 virtual ~UmpDetailAddResponse() { }

  qlonglong getDetailId() const;
  void setDetailId (qlonglong detailId);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 活动详情的id
 **/
  qlonglong detailId;

};

#endif
