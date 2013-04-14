#ifndef TRADERATEEXPLAINADDRESPONSE_H
#define TRADERATEEXPLAINADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 商城卖家给评价做出解释（买家追加评论后、评价超过30天的，都不能再做评价解释）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TraderateExplainAddResponse : public TaoResponse
{
public:
 virtual ~TraderateExplainAddResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 商城卖家给评价解释是否成功。
 **/
  bool isSuccess;

};

#endif
