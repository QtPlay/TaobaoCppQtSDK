#ifndef UMPRANGEADDRESPONSE_H
#define UMPRANGEADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 指定某项活动中，某个商家的某些类型物品（指定商品，指定类目或者别的）参加或者不参加活动。当活动详情的参与类型为部分或者部分不参加的时候，需要指定具体哪部分参加或者不参加，使用本接口完成操作。比如部分商品满就送，这里的range用来指定具体哪些商品参加满就送活动。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpRangeAddResponse : public TaoResponse
{
public:
 virtual ~UmpRangeAddResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 是否成功
 **/
  bool isSuccess;

};

#endif
