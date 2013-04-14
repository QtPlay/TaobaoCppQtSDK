#ifndef SELECTEDITEM_H
#define SELECTEDITEM_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 天猫精选商品列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SelectedItem : public TaoDomain
{

public:
 virtual ~SelectedItem() { }

  qlonglong getCid() const;
  void setCid (qlonglong cid);
  QString getItemScore() const;
  void setItemScore (QString itemScore);
  qlonglong getShopId() const;
  void setShopId (qlonglong shopId);
  QString getTrackIid() const;
  void setTrackIid (QString trackIid);
  
  virtual void parseResponse();

private:
/**
 * @brief 商品对应的后台类目id
 **/
  qlonglong cid;

/**
 * @brief 商品综合得分，根据商家运营能力、商家服务能力、商品质量多方面表现综合得到的分数。得分越高越好。
 **/
  QString itemScore;

/**
 * @brief 店铺id
 **/
  qlonglong shopId;

/**
 * @brief 商品id（具有跟踪效果）代替原来的num_iid  <a href="http://dev.open.taobao.com/bbs/read.php?tid=24323">详细说明</a>
 **/
  QString trackIid;

};

#endif  /* SELECTEDITEM_H */
